#include <iostream>

using namespace std;

int* encoding(char const*, char const*);
char* decoding(int const*, int, char const*);
char* createRule(const char*);
char* createRule(const char*, int);
void createRuleTest();
void encodingTests();
void decodingTests();
bool equals(const char*, const char*);
bool equals(const int*, int, const int*, int);
bool isAlphabet(char);
char toUpper(char);
int indexOf(const char*, char);
int getLength(const char*);

int main()
{
	createRuleTest();
	encodingTests();
	decodingTests();
	system("pause");
}

char* createRule(const char* source)
{
	int length = getLength(source);

	char* rule = new char[length + 1];

	//TODO

	return rule;
}

int* encoding(const char* source, const char* rule)
{
	int length = getLength(source);

	int* encode = new int[length];

	//TODO

	return encode;
}

int indexOf(const char* source, char symbol)
{
	//TODO

	return -1;
}

bool isAlphabet(char symbol)
{
	//TODO
	return false;
}

char toUpper(char symbol)
{
	//TODO
	return symbol;
}

char* decoding(const int* source, int n, const char* rule)
{
	char* decode = new char[n + 1];
	//TODO
	return decode;
}

bool equals(const char* lhs, const char* rhs)
{
	//TODO

	return true;
}

bool equals(const int* lhs, int n, const int* rhs, int m)
{
	//TODO

	return true;
}

void createRuleTest()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const char* actual = createRule(source);

	const char* expected = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

	cout << "Test for creation rule " << (equals(actual, expected) ? "Passed." : "Failed.") << endl;

	delete[] actual;

	actual = createRule(source, 5);

	expected = "UTSRQPONMLKJIHGFEDCBAZYXWV";

	cout << "Test for creation rule " << (equals(actual, expected) ? "Passed." : "Failed.") << endl;

	delete[] actual;
}

void encodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const char* rule = createRule(source);

	int* encode = encoding("Learn C++!", rule);

	cout << "Test for encoding " << (equals(encode, 10, new int[10]{ 15, 22, 26, 9, 13, 32, 24, 43, 43, 33 }, 10) ? "Passed." : "Failed.") << endl;

	delete[] encode;

	encode = encoding("Cogito, ergo sum! (Descartes)", rule);

	cout << "Test for encoding " << (equals(encode, 29, new int[29]{ 24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41 }, 29) ? "Passed." : "Failed.") << endl;

	delete[] encode;

	delete[] rule;

	// new shift rule

	rule = createRule(source, 5);

	encode = encoding("Learn C++!", rule);

	cout << "Test for encoding " << (equals(encode, 10, new int[10]{ 10, 17, 21, 4, 8, 32, 19, 43, 43, 33 }, 10) ? "Passed." : "Failed.") << endl;

	delete[] encode;

	encode = encoding("Cogito, ergo sum! (Descartes)", rule);

	cout << "Test for encoding " << (equals(encode, 29, new int[29]{ 19, 7, 15, 13, 2, 7, 44, 32, 17, 4, 15, 7, 32, 3, 1, 9, 33, 32, 40, 18, 17, 3, 19, 21, 4, 2, 17, 3, 41 }, 29) ? "Passed." : "Failed.") << endl;

	delete[] encode;

	delete[] rule;
}

void decodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const char* rule = createRule(source);

	char* decode = decoding(new int[10]{ 15, 22, 26, 9, 13, 32, 24, 43, 43, 33 }, 10, rule);

	cout << "Test for decoding " << (equals(decode, "LEARN C++!") ? "Passed." : "Failed.") << endl;

	delete[] decode;

	decode = decoding(new int[29]{ 24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41 }, 29, rule);

	cout << "Test for decoding " << (equals(decode, "COGITO, ERGO SUM! (DESCARTES)") ? "Passed." : "Failed.") << endl;

	delete[] decode;

	delete[] rule;

	// new shift rule

	rule = createRule(source, 5);

	decode = decoding(new int[10]{ 10, 17, 21, 4, 8, 32, 19, 43, 43, 33 }, 10, rule);

	cout << "Test for decoding " << (equals(decode, "LEARN C++!") ? "Passed." : "Failed.") << endl;

	delete[] decode;

	decode = decoding(new int[29]{ 19, 7, 15, 13, 2, 7, 44, 32, 17, 4, 15, 7, 32, 3, 1, 9, 33, 32, 40, 18, 17, 3, 19, 21, 4, 2, 17, 3, 41 }, 29, rule);

	cout << "Test for decoding " << (equals(decode, "COGITO, ERGO SUM! (DESCARTES)") ? "Passed." : "Failed.") << endl;

	delete[] decode;

	delete[] rule;

}

char* createRule(const char* source, int shift)
{
	char* rule = createRule(source);

	int length = getLength(source);

	//TODO

	return rule;
}

int getLength(const char* source)
{
	int length = 0;

	//TODO

	return length;
}
