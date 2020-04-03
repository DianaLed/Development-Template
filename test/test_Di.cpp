#include <gtest/gtest.h>
#include "dict.h"
#include "ALLDict.h"

TEST(ALLDict, Comparison) {
  Dict a("Lola", "����"), b("Lola", "����");
  ALLDict A, B;
  A.DopSTR(a);
  B.DopSTR(b);
  EXPECT_EQ(A == B, 1);
}

TEST(ALLDict, Can_it_stack_multiple_dictionaries) {
  Dict a("Lol", "���"), b("Lola", "����");
  ALLDict A, B, C(a, b);
  A.DopSTR(a);
  B.DopSTR(b);
  EXPECT_EQ(A + B, C);
}

TEST(ALLDict, change_translation) {
  Dict a("world", "���"), b("Rome", "���");
  ALLDict C(a, b);
  C.ChTran("���", "universe");
  EXPECT_EQ(C.Poisk("universe"), 1);
}

TEST(ALLDict, Poisk) {
  Dict a("world", "���"), b("Rome", "���");
  ALLDict C(a, b);
  EXPECT_EQ(C.Poisk("���"), 1);
  EXPECT_EQ(C.Poisk("Rome"), 1);
}

TEST(ALLDict, translation) {
  Dict a("world", "���"), b("Rome", "���");
  ALLDict C(a, b);
  EXPECT_EQ(C.Tran("���"), "world");
  EXPECT_EQ(C.Tran("Rome"), "���");
}

TEST(ALLDict, Translation_Change) {
  Dict a("world", "���"), b("Rome", "���");
  ALLDict C(a, b);
  C.ChTran("���", "World");
  EXPECT_EQ(C.Poisk("World"), 1);
  EXPECT_EQ(C.Poisk("world"), 0);
}