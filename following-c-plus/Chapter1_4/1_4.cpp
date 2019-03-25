#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf 

int main()
{
	using namespace std;

	int x = 1024;
	double pi = 3.141592;

	std::cout << "I love this lecture!" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;
	
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "Hello world :D" << endl;

	int input_val;
	std::cin >> input_val;
	cout << "Your input is " << input_val << endl;

	return 0;
}