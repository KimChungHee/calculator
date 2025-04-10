#include "gmock/gmock.h"

class Cal {
public:
	int getMinus(a, b) {
		return a - b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}


TEST(t1, t3) {
	int a = 5;
	int b = 2;
	int actual = a - b;
	EXPECT_EQ(actual, 3);
}

int main() {
	::testing::InitGoogleMock();
	return 0;
}
