//
// Created by Chris Kjellqvist on 1/22/23.
//

#include "DecisionTree.h"
#include <composer_allocator_declaration.h>
#include <composer/fpga_handle.h>
#include <composer/response_handle.h>

using namespace composer;

int num_examples = 2;

response_handle sendDTCmd(remote_ptr &trees, remote_ptr &feats, remote_ptr &output) {
  uint64_t p1 = 0, p2 = 0, p3 = 0, p4 = 0;

  // pack together p1, p2
  pack_helper<int, exampleBits, 0>(num_examples-1, p1, p2);
  pack_helper<int, nTreeBits, exampleBits>(maxNTrees - 1, p1, p2);
  pack_helper<uint64_t, composerNumAddrBits, nTreeBits + exampleBits>(output.getFpgaAddr(), p1, p2);

  rocc_cmd::start_cmd(DTAccel_ID, 1, 0, false, RD::R0, 0, 0, 0, p1, p2).send();

  // pack together p3, p4 for other start
  pack_helper<uint64_t, composerNumAddrBits, 0>(feats.getFpgaAddr(), p3, p4);
  pack_helper<uint64_t, composerNumAddrBits, composerNumAddrBits>(trees.getFpgaAddr(), p3, p4);
  pack_helper<uint64_t, nFeatureIdxBits, 2 * composerNumAddrBits>(maxNFeatures - 1, p3, p4);

  auto cmd2 = rocc_cmd::start_cmd(DTAccel_ID, 0, 0, true, RD::R0, 0, 0, 0, p3, p4).send();
  return cmd2;
}

int main() {
  float sparsity = 1;
  DecisionTreeForest dtf(maxNTrees, maxNFeatures, maxTreeDepth, sparsity);
  std::cout << "Expected sparsity: " << sparsity << "\nReal Sparsity: " << dtf.computeSparsity() << std::endl;
  fpga_handle_t handle;

  auto mem = handle.malloc(DecisionTreeForest::getSerializedSize(maxTreeDepth, maxNTrees));
  dtf.serialize(maxNTrees, mem.getHostAddr());
  handle.copy_to_fpga(mem);

  auto output = handle.malloc(sizeof(float) * maxNExamples);
  auto f_out = (float*)output.getHostAddr();
  auto feat = handle.malloc(maxNFeatures * maxNExamples * 4);
  makeRandomFeatureSet(num_examples * maxNFeatures, feat.getHostAddr());
  handle.copy_to_fpga(feat);

  sendDTCmd(mem, feat, output).get();

  float answer = *f_out;

  std::cout << "Received: " << answer << std::endl;
  auto prediction = dtf.predict((float*)feat.getHostAddr());
  std::cout << "Expected: " << prediction << std::endl;

  rocc_cmd::flush_cmd().send();
}