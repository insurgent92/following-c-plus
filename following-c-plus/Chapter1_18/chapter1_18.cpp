#include <iostream>

void my_function(void)
{

}

int main(void)
{
	int i = 123;
	float f = 123.456f;

	void *my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	std::cout << *(float*)my_void << std::endl;
}
