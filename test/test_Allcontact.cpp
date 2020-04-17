#include <gtest/gtest.h>
#include "Allcontact.h"
using namespace std;

TEST(AllCotact, Construktors) {
  Contact *a = new Contact[1];
  Contact a1("����", "��������", "������");
  a[0] = a1;
  AllContact A, A1(a, 1);
  A.Dop�on(a1);
  int s = A.getSize();
  EXPECT_EQ(s, 1);
  EXPECT_EQ(A, A1);
}

TEST(AllCotact, Im_Get_favorite) {
  Contact *a = new Contact[1];
  Contact a1("����", "��������", "������");
  AllContact A;
  A.Dop�on(a1);
  A.imFav(0, 1);
  bool d = A.getFav( 0 );
  EXPECT_EQ(d, 1 );
}

TEST(AllCotact, Del_element) {
  Contact *a = new Contact[1];
  Contact a1("����", "��������", "������");
  AllContact A, A1;
  A.Dop�on(a1);
  A.Del�on(0);
  int s = A.getSize();
  EXPECT_EQ(s, 0);
  EXPECT_EQ(A, A1);
}

TEST(AllCotact, i_poisk_fio) { 
  Contact *a = new Contact[1];
  Contact a1("����", "��������", "������");
  AllContact A;
  A.Dop�on(a1);
  int i = A.i_poisk_fio("����", "��������", "������");
  int i1 = A.i_poisk_fio("", "", "");
  EXPECT_EQ(i, 0);
  EXPECT_EQ(i1, -1);
}
TEST(AllCotact, oper_ravno_ravno) {
  AllContact A, A1;
  bool a = (A == A1);
  EXPECT_EQ(a, 1);
}

TEST(AllCotact, min) {
  AllContact A;
  Contact a("A A A");
  Contact b("� � �");
  Contact c("� � �");
  A.Dop�on(a);
  A.Dop�on(c);
  A.Dop�on(b);
  int i=A.min(0);
  /*AllContact A1;
  A1.Dop�on(a);
  A1.Dop�on(b);
  A1.Dop�on(c);*/
  EXPECT_EQ(i, 0);
}

TEST(AllCotact, Alphabet3) {
  AllContact A;
  Contact a("������ ������� ����������");
  Contact b("������ ������� ����������");
  Contact c("������ ������� ����������");
  A.Dop�on(a);
  A.Dop�on(c);
  A.Dop�on(b);
  A.Alphabet();
  AllContact A1;
  A1.Dop�on(a);
  A1.Dop�on(b);
  A1.Dop�on(c);
  EXPECT_EQ(A, A1);
}
TEST(AllCotact, Alphabet) {
  AllContact A;
  Contact a("A A A");
  Contact b("� � �");
  Contact c("� � �");
  A.Dop�on(a);
  A.Dop�on(c);
  A.Dop�on(b);
  A.Alphabet();
  int i = A.min(0);
  AllContact A1;
  A1.Dop�on(a);
  A1.Dop�on(b);
  A1.Dop�on(c);
  EXPECT_EQ(A, A1);
}

TEST(AllCotact, Alphabet1) {
  AllContact A;
  Contact a("������ ������� ���������");
  Contact b("������ ����� ���������");
  Contact c("������ ��� ���������");
  A.Dop�on(a);
  A.Dop�on(c);
  A.Dop�on(b);
  A.Alphabet();
  AllContact A1;
  A1.Dop�on(a);
  A1.Dop�on(b);
  A1.Dop�on(c);
  EXPECT_EQ(A, A1);
}

TEST(AllCotact, Alphabet2) {
  AllContact A;
  Contact a("������ ������� ���������");
  Contact b("������ ������� ���������");
  Contact c("������ ������� ���������");
  A.Dop�on(a);
  A.Dop�on(c);
  A.Dop�on(b);
  A.Alphabet();
  AllContact A1;
  A1.Dop�on(a);
  A1.Dop�on(b);
  A1.Dop�on(c);
  EXPECT_EQ(A, A1);
}

