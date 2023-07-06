#include <iostream>
using namespace std;

class SimilarityChecker
{
public:
	int getLengthPoint(string str1, string str2)
	{
		int smallLength = str1.length() >= str2.length() ? str2.length() : str1.length();
		int gap = (str1.length() >= str2.length()) ? (str1.length() - str2.length()) : (str2.length() - str1.length());

		return MAX_LENGTH_POINT - (gap * MAX_LENGTH_POINT / smallLength);
	}
private:
	const int MAX_LENGTH_POINT = 60;
};