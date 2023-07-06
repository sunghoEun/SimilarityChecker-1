#include <iostream>
using namespace std;

class Cal
{
public:
	int getLengthPoint(string str1, string str2)
	{
		int smallLength = str1.length() >= str2.length() ? str2.length() : str1.length();
		int gap = (str1.length() >= str2.length()) ? (str1.length() - str2.length()) : (str2.length() - str1.length());

		return 60 - (gap * 60 / smallLength);
	}
};