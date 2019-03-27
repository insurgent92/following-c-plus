// literal 리터럴 (말 그대로?)
// Operand 피연산자
// 단항 (Unary), 이상 (binary), 삼항(ternary)

#include <iostream>

int main() {
	int x = 2; // x is a variable, 2 is a literal 
	// 2는 말 그대로 숫자? 메모리 공간을 잡고 값을 바꾸고 계산을 다시하고 하지 않음. 
	// 그럼 메모리 공간을 잡지 않는게? 
	
	x = 2; 
	// '=' 도 연산자. 대입 연산자임 

	std::cout << x + 2 << std::endl;
	//여기에서 x랑 2가 피 연산자임. 

	//이 밑의 문자열도 리터럴임 
	std::cout << "Hello, world!" << std::endl;

	//단항연산자
	-x; // x를 negative로 바꾸는 연산자임 

	//삼항 연산자
	x == 1 ? 2 : 2;


	return 0;
}