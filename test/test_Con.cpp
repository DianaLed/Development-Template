#include <gtest/gtest.h>
#include "Contacts.h"
#include "FUN.h"


TEST(Cotacts, Construktors1) {
  Contact a("����", "��������", "������"), a1("����", "��������", "������", "0", 0);
  Contact s1, s2;
  Contact b("���� �������� ������");
  EXPECT_EQ(a==a1, 1);
}
TEST(Cotacts, Construktors2) {
  Contact a("����", "��������", "������"), a1("����", "��������", "������", "0", 0);
  Contact s1, s2;
  Contact b("���� �������� ������");
  EXPECT_EQ(s1 != s2, 0);
}
TEST(Cotacts, Construktors3) {
  Contact a("����", "������", "��������"), a1("����", "������", "��������", "0", 0);
  Contact s1, s2;
  Contact b("������ ���� ��������");
  EXPECT_EQ(a == b, 1);
}


TEST(Cotacts, getNAME) {
  Contact a("����", "��������", "������");
  string a1 = a.getNAME();
  EXPECT_EQ(a1, "����");
}
TEST(Cotacts, getFn) {
  Contact a("����", "��������", "������");
  string a2 = a.getFn();
  EXPECT_EQ(a2, "��������");
}
TEST(Cotacts, getPA) {
  Contact a("����", "��������", "������");
  string a3 = a.getPA();
  EXPECT_EQ(a3, "������");
}

TEST(Cotacts, imFn) {
  string a1 = "����", a2 = "��������", a3 = "������", a4="88005553535";
  Contact a;
  a.imFn(a2);
  EXPECT_EQ(a.getFn(), "��������");
}
TEST(Cotacts, imNAME) {
  string a1 = "����", a2 = "��������", a3 = "������", a4 = "88005553535";
  Contact a;
  a.imNAME(a1);
  EXPECT_EQ(a.getNAME(), "����");
}
TEST(Cotacts, imPA) {
  string a1 = "����", a2 = "��������", a3 = "������", a4 = "88005553535";
  Contact a;
  a.imPA(a3);
  EXPECT_EQ(a.getPA(), "������");
}
TEST(Cotacts, imPH) {
  string a1 = "����", a2 = "��������", a3 = "������", a4 = "88005553535";
  Contact a;
  a.imPH(a4);
  EXPECT_EQ(a.getPH(), "88005553535");
}
TEST(Cotacts, imFav) {
  string a1 = "����", a2 = "��������", a3 = "������", a4 = "88005553535";
  Contact a;
  a.imFav(1);
  EXPECT_EQ(a.getFA(), 1);
}

TEST(Cotacts, Alph) {
  Contact a("������ ���� ��������"), b("������� ������� ��������");
  EXPECT_EQ(b>a, 1);
}

//TEST(Cotacts, fun_swap) {
//  Contact a("����", "��������", "������");
//  Contact b("��� ������������ �������");
//  swap_con(a, b);
//  int i = 0;
//  //EXPECT_EQ(a, 1);
//}