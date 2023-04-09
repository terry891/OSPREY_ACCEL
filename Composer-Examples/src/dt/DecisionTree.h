//
// Created by Chris Kjellqvist on 1/22/23.
//

#ifndef LFSRTEST_DECISIONTREE_H
#define LFSRTEST_DECISIONTREE_H

#include <vector>
#include <random>
#include <tuple>

#include <composer_allocator_declaration.h>
#include "../util/util.h"

class DecisionTree;

class DecisionTreeForest {
  std::vector<std::pair<DecisionTree *, float> > forest;
  int depth;
public:
  void addTree(DecisionTree *tree, float weight);

  void *serialize(int forMaxTrees, void * opt = nullptr);

  static size_t getSerializedSize(int maxDepth, int forMaxTrees) {
    // 4 bytes for threshold
    // `depth` bits for threshold + 1 for leaf node signal
    int indexBitWidth = nFeatureIdxBits;
    int indexWidthBytes = indexBitWidth / 8;

    int thresholdBytes = (1 << maxDepth) * 4;
    int thresholdBytesTotal = roundToPage(thresholdBytes * forMaxTrees);

    int indexBytes = (1 << maxDepth) * indexWidthBytes;
    int indexBytesRound = roundToPage(indexBytes * forMaxTrees);

    return indexBytesRound + thresholdBytesTotal;
  }


  float predict(float *features);

  DecisionTreeForest(int withNTrees, int withNFeatures, int withDepth, float withSparsity);

  float computeSparsity();
};

class DecisionTree {
  friend DecisionTreeForest;
  bool isLeaf;
  float val;
  int featureIdx;
  DecisionTree *left, *right;

  std::vector<DecisionTree *> *enumerateNodesAtDepth(int depth, int current = 1,
                                                     std::vector<DecisionTree *> *acc = new std::vector<DecisionTree *>());

  DecisionTree(bool isLeaf, float val, int featureIdx, DecisionTree *left, DecisionTree *right);

  void subSerialize(float withTreeWeight, float *thresholdSector, char *indexSector);

  int getDepth();

  DecisionTree(int withDepth, int withNFeatures, float k);

  int treeOccupancy();

public:

  float predict(float *features);

  static DecisionTree *makeRandomTree(int withDepth, int withNFeatures, float withSparsity = 1);

  [[maybe_unused]] static DecisionTree* LeafNode(float val);

  [[maybe_unused]] static DecisionTree* InternalNode(float threshold, int featureIdx, DecisionTree *left, DecisionTree *right);
};

float *makeRandomFeatureSet(int withNFeatures, void * opt = nullptr);


#endif //LFSRTEST_DECISIONTREE_H
