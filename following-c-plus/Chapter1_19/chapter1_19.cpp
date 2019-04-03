#include <iostream>
#include <iomanip>
#include <limits>

#define SAPARATOR cout << "----------" << endl;
int main()
{
	using namespace std;
	float f;
	double d;
	long double ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	SAPARATOR;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	SAPARATOR;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;

	SAPARATOR;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	
	SAPARATOR;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;

	SAPARATOR;

	cout << std::setprecision(64) << endl;
	cout << 1.0 / 3.0 << endl;
	cout << 1.0 / 3.0 * 3.0<< endl;

	SAPARATOR;
	float ff(987654321.0f);
	cout << std::setprecision(16) << endl;
	ff = 987654321.0f;
	cout << ff << endl;

	SAPARATOR;
	double dd(0.1);
	cout << dd << endl;
	cout << std::setprecision(20) << endl;
	cout << dd << endl;

	SAPARATOR;
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << d1 << endl;
	cout << d2 << endl;

	cout << std::setprecision(4) << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	bool is = (d1 == d2);
	cout << is << endl;

	SAPARATOR;

	double zero = 0.0;
	double posinf1 = 5.0 / zero;
	double posinf2 = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	bool iis = (posinf1 == posinf2);
	cout << posinf1 << endl;
	cout << neginf << endl;
	cout << nan << endl;
	cout << iis << endl;

	SAPARATOR;

	cout << std::isnan(posinf1) << endl;
	cout << std::isnan(neginf) << endl;
	cout << std::isnan(nan) << endl;

	SAPARATOR;

	cout << std::isinf(posinf1) << endl;
	cout << std::isinf(neginf) << endl;
	cout << std::isinf(nan) << endl;

	return 0;
}