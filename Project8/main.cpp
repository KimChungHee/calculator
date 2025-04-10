#include "gmock/gmock.h"

class Cal {
public:
	int getGop(int a, int b)
	{
		return a * b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, GopTest) {
	Cal cal;
	int result = cal.getGop(3, 5);
	int expected = 15;
	EXPECT_EQ(expected, result);
}

int main() {
	::testing::InitGoogleMock();	
	return RUN_ALL_TESTS();
}