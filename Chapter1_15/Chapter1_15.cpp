#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;
	char chValue = 'A';

	float fValue = 3.141592f;
	double dValue = 3.141592f;

	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;

	cout << sizeof(bool) << endl;

	int a(3.141562); // direct intitialization 
	int b{ 3 }; // uniform initializaton 
	int c = 3.141562;
	
	int k = 1, l = 0;

	cout << k << " " << l << endl;
	return 0;
 }