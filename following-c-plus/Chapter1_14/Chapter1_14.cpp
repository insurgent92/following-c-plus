#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER 9
#define MAX(a, b) (((a) > (b)) ? (a) : (b)) // 요즘은 매크로 많이 안씁니다. 

#define LIKE_APPLE

int main()
{
	cout << MY_NUMBER << endl;
	cout << MAX(3 + 2, 4) << endl;
	cout << std::max(5, 4) << endl;

#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif // !LIKE_APPLE

	return 0;
}