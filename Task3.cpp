#include <iostream>

using namespace std;

int getLength(const char*);
bool isDigit(const char);
void reverseNumber(int&);
//etc
int parseStringToSumWithUnsigned(const char*);
int parseStringToSumWithSigned(const char*);
void parseStringToSumWithUnsignedTest();
void parseStringToSumWithSignedTest();


int main()
{
	parseStringToSumWithUnsignedTest();
	parseStringToSumWithSignedTest();
	system("pause");
	return 0;
}

int parseStringToSumWithUnsigned(const char* source)
{
	return 0;
}

int parseStringToSumWithSigned(const char*)
{
	return 0;
}

bool isDigit(const char symbol)
{
	return true;
}

void reverseNumber(int& number)
{
	return;
}

int getLength(const char* source)
{
	int length = 0;

	while (source[length])
	{
		length++;
	}

	return length;
}

void parseStringToSumWithUnsignedTest()
{
	bool result = parseStringToSumWithUnsigned("1235+-8+*** 90") == 1333;
	cout << "Test for unsigned parsing " << ( result ? "Passed." : "Failed." ) << endl;

	result = parseStringToSumWithUnsigned("1235+-8+* 4** -22--- 9") == 1278;
	cout << "Test for unsigned parsing " << (result ? "Passed." : "Failed.") << endl;

	//etc
}

void parseStringToSumWithSignedTest()
{
	bool result = parseStringToSumWithSigned("1235+-8+*** 90") == 1317;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

	result = parseStringToSumWithSigned("1235+-8+* 4** -22--- 9") == 1218;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

	//etc
}