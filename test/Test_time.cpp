#include <gtest/gtest.h>
#include "HeaderClass.h"

TEST(Addition, CanAddTwoPositiveNumbers) {
  //Time t, t2, t3;
  //EXPECT_EQ(add(t, t2), t3);
  EXPECT_EQ(add(2, 3), 5);
}

TEST(TestRavnoRavno, comparisonequal) {
  Time t1, t2;
  EXPECT_EQ(t1==t2, 1);
}

TEST(Test_more_equal, comparison_more_equal) {
  Time t1(10, 04, 00), t2;
  EXPECT_EQ(t1 >= t2, 1);
}

TEST(Test_smaller_equal, comparison_smaller_equal) {
  Time t1(10, 04, 00), t2;
  EXPECT_EQ(t1 <= t2, 0);
}

TEST(Test_smaller, comparison_smaller) {
  Time t1(10, 04, 00), t2;
  EXPECT_EQ(t1 < t2, 0);
}

TEST(Test_more, comparison_more) {
  Time t1(10, 04, 00), t2;
  EXPECT_EQ(t1 > t2, 1);
}

TEST(Test_no_equal, comparison_no_equal) {
  Time t1(10, 04, 00), t2;
  EXPECT_EQ(t1 != t2, 1);
}

TEST(Test_add, comparison_add) {
  Time t1(10, 04, 00), t2(2, 1, 6), t3(12, 05, 06);
  EXPECT_EQ(t1+t2, t3);
}

TEST(Test_subtraction, comparison_subtraction) {
  Time t1(10, 04, 00), t2(2, 1, 6), t3(8, 02, 54);
  EXPECT_EQ(t1 - t2, t3);
}

TEST(TestRavno, comparisonequal) {
  Time t1(20,02,02), t2;
  t2 = t1;
  EXPECT_EQ(t2, t1);
}