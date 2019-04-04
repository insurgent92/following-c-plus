#include <iostream>

int main()
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };
	b3 = false;

	{
		cout << std::boolalpha;
		cout << b3 << endl;
		cout << b1 << endl;
	}
	cout << b3 << endl;
	cout << b1 << endl;
	return 0;
}