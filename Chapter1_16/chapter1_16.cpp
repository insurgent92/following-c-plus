#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	short		s = 1;
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;
	
	s = 32767;
	s = s + 1;

	cout << s << endl;

	cout << 22 / 4 << endl;
	cout << 22. / 4 << endl;

	return 0;
}