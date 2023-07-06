#include "pch.h"
#include "../Project6/source.cpp"

TEST(TestSimilarityChecker, lengthPoint1) {

	Cal cal;

	string input1 = "ABC";
	string input2 = "ABC";
	int ret = cal.getLengthPoint(input1, input2);
  EXPECT_EQ(60, ret);
}

TEST(TestSimilarityChecker, lengthPoint2) {

	Cal cal;

	string input1 = "ABC";
	string input2 = "ABCABC";
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(0, ret);
}

TEST(TestSimilarityChecker, lengthPoint3) {

	Cal cal;

	string input1 = "ABC";
	string input2 = "ABCA";
	int ret = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(40, ret);
}