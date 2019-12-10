#include <iostream>

using namespace std;

int nextSmallerThan(int);
void nextSmallerThanTests();

int main()
{
	nextSmallerThanTests();
	system("pause");
}

int nextSmallerThan(int number)
{
	// TODO

	return -1;
}

void nextSmallerThanTests()
{
	cout << "Test " << (nextSmallerThan(21) == 12 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(531) == 513 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(2071) == 2017 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(9) == -1 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(111) == -1 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(135) == -1 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(1027) == -1 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(1113211111) == 1113121111 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(91234567) == 79654321 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(173582) == 173528 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(4321234) == 4314322 ? "Passed." : "Failed.") << endl;
	cout << "Test " << (nextSmallerThan(2147483647) == 2147483476 ? "Passed." : "Failed.") << endl;
}
