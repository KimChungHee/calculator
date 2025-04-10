#include "gmock/gmock.h"

class Cal {
public:
	int getSum(int a, int b) {
		return a + b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, sum1) {
	Cal cal;
	int actual = cal.getSum(4, 7);
	EXPECT_EQ(actual, 11);
}

int main() {
	::testing::InitGoogleMock();
	return 0;
}