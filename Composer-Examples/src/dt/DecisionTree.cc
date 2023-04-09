#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
//
// Created by Chris Kjellqvist on 1/22/23.
//

#include <cmath>
#include "DecisionTree.h"
#include <iostream>

std::vector<DecisionTree *> *
DecisionTree::enumerateNodesAtDepth(int depth, int current, std::vector<DecisionTree *> *acc) {
  if (current == depth) {
    acc->push_back(this);
    return acc;
  } else if (current > depth) {
    return acc;
  } else {
    if (left == nullptr) {
      for (int i = 0; i < (1 << (depth - current - 1)); ++i) {
        acc->push_back(nullptr);
      }
    } else left->enumerateNodesAtDepth(depth, current + 1, acc);
    if (right == nullptr) {
      for (int i = 0; i < (1 << (depth - current - 1)); ++i) {
        acc->push_back(nullptr);
      }
    } else right->enumerateNodesAtDepth(depth, current + 1, acc);
    return acc;
  }
}

static int roundUpToPow2(int q) {
  return 1 << int(ceil(log2(q)));
}

#include <composer_allocator_declaration.h>

void DecisionTree::subSerialize(float withTreeWeight, float *thresholdSector, char *indexSector) {
  int depth = getDepth();
  // `depth` bits for threshold + 1 for leaf node signal
  int indexBitWidth = nFeatureIdxBits;
  int indexWidthBytes = indexBitWidth / 8;

  *thresholdSector = withTreeWeight;
  ++thresholdSector;
  memset(indexSector, 0, indexWidthBytes);
  indexSector += indexWidthBytes;
  int featureIndexMask = (1 << (nFeatureIdxBits - 1)) - 1;

  for (int i = 1; i <= depth; ++i) {
    auto *vector = enumerateNodesAtDepth(i);
    for (auto *DT: *vector) {
      if (DT == nullptr) {
        *thresholdSector = 0;
        memset(indexSector, 0xFF, indexWidthBytes);
      } else {
        int leafBit = int(DT->isLeaf) << (nFeatureIdxBits - 1);
        *thresholdSector = DT->val;
        switch (indexWidthBytes) {
          case 1:
            *(unsigned char *) indexSector = (unsigned char) (leafBit | (featureIndexMask & DT->featureIdx));
            break;
          case 2:
            *(unsigned short *) indexSector = (unsigned short) (leafBit | (featureIndexMask & DT->featureIdx));
            break;
          case 4:
            *(unsigned int *) indexSector = (unsigned int) (leafBit | (featureIndexMask & DT->featureIdx));
            break;
          default:
            throw std::exception();
        }
      }
      ++thresholdSector;
      indexSector += indexWidthBytes;
    }
  }
}

#define max(x, y) ((x > y)?x:y)

int DecisionTree::getDepth() {
  if (isLeaf) {
    return 1;
  } else {
    int leftD = 0, rightD = 0;
    if (left != nullptr)
      leftD = left->getDepth();
    if (right != nullptr)
      rightD = right->getDepth();
    return max(leftD, rightD) + 1;
  }
}

DecisionTree::DecisionTree(bool isLeaf, float val, int featureIdx, DecisionTree *left, DecisionTree *right) : isLeaf(
        isLeaf), val(val), featureIdx(featureIdx), left(left), right(right) {}

float DecisionTree::predict(float *features) {
  // if features(idx) < threshold, go to right tree, else left
  if (isLeaf) {
    std::cout << "\t\t" << val << std::endl;
    return val;
  } else {
    if (features[featureIdx] < val) {
      std::cout << "\t\tright " << featureIdx << " " << features[featureIdx] << " < " << val << std::endl;
      return right->predict(features);
    } else {
      std::cout << "\t\tleft " << featureIdx << " " << features[featureIdx] << " >= " << val << std::endl;
      return left->predict(features);
    }
  }
}

//static std::random_device rd;
static std::uniform_real_distribution<float> float_dist(0, 1);
static std::uniform_int_distribution<int> *int_dist = nullptr;
static std::random_device rd;
static std::mt19937 engine(rd());

[[maybe_unused]] DecisionTree *DecisionTree::LeafNode(float val) {
  return new DecisionTree(true, val, 0, nullptr, nullptr);
}

[[maybe_unused]] DecisionTree *
DecisionTree::InternalNode(float threshold, int featureIdx, DecisionTree *left, DecisionTree *right) {
  return new DecisionTree(false, threshold, featureIdx, left, right);
}

static const float a_0 = 1;

static float lambda_f(float k) {
  return 2 * (1 - k);
}

static float rho_f(float k) {
  return a_0 / (1 - lambda_f(k));
}

static float affine_sequence(float rho, float lambda, float x) {
  return pow(lambda, x-1) * (a_0 - rho) + rho;
}

static float sparsity_from_k(float k, int depth) {
  auto occ = affine_sequence(rho_f(k), lambda_f(k), depth);
  return occ / float((1 << depth) - 1);
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "ConstantParameter"

static float search_k_for_sparsity(float sparsity, int depth, float withError = 0.01) {
#pragma clang diagnostic pop
  float bound0 = 0, bound1 = 1;
  assert(sparsity >= 0 && sparsity <= 1);
  float error, guess;
  while (true) {
    guess = (bound0 + bound1) / 2;
    if (guess == 0.5)
      guess = 0.501;
    float sp = sparsity_from_k(guess, depth);
    error = abs(sp - sparsity);
    if (error < withError) break;
    else {
      if (sp > sparsity) {
        bound0 = guess;
      } else {
        bound1 = guess;
      }
    }
  }
  return guess;
}

DecisionTree *DecisionTree::makeRandomTree(int withDepth, int withNFeatures, float sparsity) {
  auto k = search_k_for_sparsity(sparsity, withDepth);
  return new DecisionTree(withDepth, withNFeatures, k);
}

static std::uniform_real_distribution<float> prob(0, 1);

DecisionTree::DecisionTree(int withDepth, int withNFeatures, float k) {
  if (int_dist == nullptr)
    int_dist = new std::uniform_int_distribution<int>(0, withNFeatures - 1);
  left = right = nullptr;
  auto gen = prob(engine);
  bool prune = gen < k;
  if (withDepth == 1 || prune) {
    isLeaf = true;
    val = float_dist(engine);
    featureIdx = 0;
  } else {
    isLeaf = false;
    val = float_dist(engine);
    featureIdx = (*int_dist)(engine);
    left = new DecisionTree(withDepth - 1, withNFeatures, k);
    right = new DecisionTree(withDepth - 1, withNFeatures, k);
  }
}

int DecisionTree::treeOccupancy() {
  if (isLeaf) return 1;
  else return 1 + left->treeOccupancy() + right->treeOccupancy();
}

void *DecisionTreeForest::serialize(int forMaxTrees, void *opt) {
  // 4 bytes for threshold
  // `depth` bits for threshold + 1 for leaf node signal
  int indexBitWidth = nFeatureIdxBits;
  int indexWidthBytes = indexBitWidth / 8;

  int thresholdBytes = (1 << depth) * 4;

  int thresholdBytesTotal = roundToPage(thresholdBytes * forMaxTrees);

  int indexBytes = (1 << depth) * indexWidthBytes;
  int indexBytesTotal = roundToPage(indexBytes * forMaxTrees);

  void *alloc;
  if (opt != nullptr)
    alloc = opt;
  else
    alloc = malloc(thresholdBytesTotal + indexBytesTotal);
  auto *thresholdSector = (float *) alloc;
  char *indexSector = (char *) alloc + thresholdBytesTotal;
  for (auto pr: forest) {
    pr.first->subSerialize(pr.second, thresholdSector, indexSector);
    thresholdSector = (float *) ((char *) (thresholdSector) + thresholdBytes);
    indexSector += indexBytes;
  }

  return alloc;
}

void DecisionTreeForest::addTree(DecisionTree *tree, float weight) {
  forest.emplace_back(tree, weight);
}

float DecisionTreeForest::predict(float *features) {
  float acc = 0;
  for (auto pr: forest) {
    auto prediction = pr.first->predict(features);
    std::cout << "\t" << pr.second << " " << prediction << " = " << (pr.second * prediction) << std::endl;
    acc += pr.second * prediction;
  }
  return acc;
}

DecisionTreeForest::DecisionTreeForest(int withNTrees, int withNFeatures, int withDepth, float withSparsity) {
  depth = withDepth;
  for (int i = 0; i < withNTrees; ++i) {
    addTree(DecisionTree::makeRandomTree(withDepth, withNFeatures), withSparsity);
  }
}

float DecisionTreeForest::computeSparsity() {
  int totalOccupancy = 0;
  for (auto tree: forest) {
    totalOccupancy += tree.first->treeOccupancy();
  }
  std::cout << "total occ " << totalOccupancy << " " << depth << " " << forest.size() << std::endl;
  return (float) totalOccupancy / ((1 << depth) - 1) / forest.size();
}

float *makeRandomFeatureSet(int withNFeatures, void *opt) {
  float *f;
  if (opt == nullptr)
    f = new float[withNFeatures];
  else
    f = (float *) opt;
  for (int i = 0; i < withNFeatures; ++i) {
    f[i] = float_dist(engine);
  }
  return f;
}


#pragma clang diagnostic pop