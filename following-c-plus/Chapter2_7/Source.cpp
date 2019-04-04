#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');


	cout << c1 << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<char>('A') << endl;

	cout << (char)65 << endl;

	char ch(97);

	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	std::cout << "Hello, \u0444!\n";
	std::cout << "Hello, \u0446!\n";
	return 0;

}