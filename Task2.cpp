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
	system("pause");
}

char* createRule(const char* source)
{
	// TODO reverse source here
	return nullptr;
}

int* encoding(const char * source, const char * rule)
{
	// TODO encoding logic here
	return nullptr;
}

char* decoding(const int * source, const char * rule)
{
	// TODO decoding logic here
	return nullptr;
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
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* actual = createRule(source);
	const char* expected = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	cout << "Test for creation rule " << ( equals(actual, expected) ? "Passed." : "Failed." ) << endl;
}

void encodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const char* rule = createRule(source);

	int * encode = encoding("Learn C++!", rule);

	cout << "Test for encoding " << (equals(encode, new int [10] {15, 22, 26, 9, 13, 32, 24, 43, 43, 33}) ? "Passed." : "Failed.") << endl;
	
	encode = encoding("Cogito, ergo sum! (Descartes)", rule);
	
	cout << "Test for encoding " << (equals(encode, new int [29] {24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41}) ? "Passed." : "Failed.") << endl;

}

void decodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const char* rule = createRule(source);

	char* decode = decoding(new int [10] {15, 22, 26, 9, 13, 32, 24, 43, 43, 33}, rule);

	cout << "Test for decoding " << (equals(decode, "Learn C++!") ? "Passed." : "Failed.") << endl;

	decode = decoding(new int [29] {24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41}, rule);

	cout << "Test for decoding " << (equals(decode, "Cogito, ergo sum! (Descartes)") ? "Passed." : "Failed.") << endl;
}
