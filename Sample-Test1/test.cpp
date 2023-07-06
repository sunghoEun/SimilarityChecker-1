#include "pch.h"
#include "../Project6/source.cpp"

class SimilarityCheckerFixture : public testing::Test
{
public:
	SimilarityChecker checker{};
};

TEST_F(SimilarityCheckerFixture, lengthPoint1) {
	string input1 = "ABC";
	string input2 = "ABC";
	int ret = checker.getLengthPoint(input1, input2);
  EXPECT_EQ(60, ret);
}

TEST_F(SimilarityCheckerFixture, lengthPoint2) {
	string input1 = "ABC";
	string input2 = "ABCABC";
	int ret = checker.getLengthPoint(input1, input2);
	EXPECT_EQ(0, ret);
}

TEST_F(SimilarityCheckerFixture, lengthPoint3) {
	string input1 = "ABC";
	string input2 = "ABCA";
	int ret = checker.getLengthPoint(input1, input2);
	EXPECT_EQ(40, ret);
}
