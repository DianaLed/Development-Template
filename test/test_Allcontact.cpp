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