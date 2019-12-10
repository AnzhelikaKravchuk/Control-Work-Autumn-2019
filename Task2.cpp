#include <iostream>

using namespace std;

int* encoding(char const*, char const*);
char* decoding(int const*, char const*);
char* createRule(const char *);
void createRuleTest();
void encodingTests();
void decodingTests();
bool equals(const char *, const char *);
bool equals(const int*, const int*);

int main()
{
	createRuleTest();
	encodingTests();
	decodingTests();
}

char* createRule(const char* source)
{
	// TODO reverse source here
}

int* encoding(const char * source, const char * rule)
{
	// TODO encoding logic here
}

char* decoding(const int * source, const char * rule)
{
	// TODO decoding logic here
}

bool equals(const char * lhs, const char * rhs)
{
	// TODO

	return false;
}

bool equals(const int* lhs, const int* rhs)
{
	// TODO

	return false;
}

void createRuleTest()
{
	const char* source = "abcdefghijklmnopqrstuvwxyz";
	const char* actual = createRule(source);
	const char* expected = "zyxwvutsrqponmlkjihgfedcba";
	cout << "Test for creation rule " << ( equals(actual, expected) ? "Passed." : "Failed." ) << endl;
}

void encodingTests()
{
	const char* source = "abcdefghijklmnopqrstuvwxyz";

	const char* rule = createRule(source);

	const int * encode = encoding("Learn C++!", rule);

	cout << equals(encode, new int [] {15, 22, 26, 9, 13, 32, 24, 43, 43, 33}) << endl;
}

void decodingTests()
{
	const char* source = "abcdefghijklmnopqrstuvwxyz";

	const char* rule = createRule(source);

	const char* decode = decoding(new int [] {15, 22, 26, 9, 13, 32, 24, 43, 43, 33}, rule);

	cout << equals(decode, "Learn C++!") << endl;
}