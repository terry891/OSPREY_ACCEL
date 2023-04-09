//
// Created by Chris Kjellqvist on 1/29/23.
//

#ifndef LFSRTEST_UTIL_H
#define LFSRTEST_UTIL_H

#include <cinttypes>
template <typename t = int>
t mask(int len) {
  t a = 0;
  for (int i = 0; i < len; ++i) {
    a = (a << 1) | 1;
  }
  return a;
}

template <typename srcTy = int, int srcLen, int prevLen>
void pack_helper(srcTy arg, uint64_t &p1, uint64_t &p2) {
  if (srcLen + prevLen > 128) {
    throw std::runtime_error("Packing too much into payloads!");
  }
  if (prevLen > 64) {
    int off = prevLen - 64;
    p1 = p1 | ((arg & mask(srcLen)) << off);
  } else if (prevLen + srcLen > 64) {
    // crossover corner case
    int bottomBits = 64 - prevLen;
    p2 = p2 | ((arg & mask(bottomBits)) << prevLen);
    int restBits = srcLen - bottomBits;
    p1 = p1 | (arg & mask(restBits));
  } else {
    p2 = p2 | ((arg & mask(srcLen)) << prevLen);
  }
}

template<typename b = void>
int roundToPage(int a) {
  if (a & 0xFFF) {
    return (a + 0x1000) & 0xFFF;
  } else return a;
}

#endif //LFSRTEST_UTIL_H
