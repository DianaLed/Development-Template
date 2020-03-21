#include <gtest/gtest.h>
#include "dict.h"

TEST(Equally, Comparison) {
  Dict a("Lola", "����"), b("Lola", "����");
  ALLDict A(a), B(b);
  EXPECT_EQ(A == B, 1);
}

TEST(Sum, Can_it_stack_multiple_dictionaries) {
  Dict a("Lol", "���"), b("Lola", "����");
  ALLDict A(a), B(b), C(a, b);
  EXPECT_EQ(A + B, C);
}