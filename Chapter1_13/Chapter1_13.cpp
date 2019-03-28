#include <iostream>

namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

using namespace MySpace1;

int main()
{
	std::cout << doSomething(3, 4) << std::endl;
	return 0;
}