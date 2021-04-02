// =============================================================================
// Created by yangb on 2021/4/2.
// =============================================================================

#include "gtest/gtest.h"
#include "../src/utils/add.h"


TEST(AddCase, test1) {
  EXPECT_EQ(Add(1, 2), 3);
}

TEST(AddCase, test2) {
  EXPECT_EQ(Add(3, 2), 5);
}

