// =============================================================================
// Created by yangb on 2021/4/2.
// =============================================================================

#include "gtest/gtest.h"
#include "../src/utils/subtract.h"

TEST(SubtractCase, test1) {
  EXPECT_EQ(subtract(1, 2), -1);
}

TEST(SubtractCase, test2) {
  EXPECT_EQ(subtract(3, 2), 1);
}