#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	int x = std::pow(2, 3);

	int r = 1 + 2 + 3 * 4; // 15
	int a = 1;
	int b = 2;
	int c = 3;

	a = b = c;

	double t = 6.;
	double w = 4.;
	t /= ++w + 1.;  // t = t / (--w + 5) -> 10 / (9 + 5) = 10 / 14 = 0.714 

	cout << r << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << t << endl;

	return 0;
}