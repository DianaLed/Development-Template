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
  ALLDict A(a), C(a, b);
  A.DopSTR(b);
  EXPECT_EQ(A, C);
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

TEST(ALLDict, getW_getT) {
  Dict a("world", "���");
  string m = a.getW(), c = a.getT();
  EXPECT_EQ(m== "���", 1);
  EXPECT_EQ(c== "world", 1);
}

TEST(ALLDict, ImW_ImT) {
  Dict a("hey", "���");
  string m = "world", c = "���";
  a.ImW(c);
  a.ImT(m);
  EXPECT_EQ(a.getW() == "���", 1);
  EXPECT_EQ(a.getT() == "world", 1);
}

  // a.OB(str);

TEST(ALLDict, Dict_OB) {
  Dict a("hey", "���"), b;
  string m = "hey ���";
  b.OB(m);
  EXPECT_EQ(b.getW() == "���", 1);
  EXPECT_EQ(b.getT() == "hey", 1);
}

TEST(ALLDict, Alldict_sum) {
  Dict a("world", "���"), b("Rome", "���");
  ALLDict C(a, b), A(a), B(b), P;
  P = A + B;
  EXPECT_EQ(P, C);
}

TEST(ALLDict, dict_correct) {
  Dict a("  world  ", "-  ��� ");
  a.correct();
  Dict b("world", "���");
  ALLDict A(a), B(b);
  EXPECT_EQ(A == B, 1);
}

TEST(ALLDict, get_Size) {
  Dict a("world", "���");
  Dict b("world", "���");
  ALLDict A(a, b), B(b);
  EXPECT_EQ(A.getS(), 2);
  EXPECT_EQ(B.getS(), 1);
}
