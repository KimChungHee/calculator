#include "gmock/gmock.h"

class Cal {
 public:
  int getSumSum(int a, int b, int c) { return a + b + c; }
};

TEST(t1, t2) { EXPECT_EQ(1, 1); }

TEST(CalTest, getSumSumNormalTest) {
	Cal c;
	int expected = 3;

	int result = c.getSumSum(1,1,1);

	EXPECT_EQ(expected, result);
}

int main() {
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}