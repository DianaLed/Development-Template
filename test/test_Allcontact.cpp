#include <gtest/gtest.h>
#include "Allcontact.h"
using namespace std;

TEST(AllCotact, Construktors) {
  Contact a("����", "��������", "������");
  AllContact A, A1(a);
  A.Dop�on(a);
  int s = A.getSize();
  EXPECT_EQ(s, 1);
  EXPECT_EQ(A, A1);
}