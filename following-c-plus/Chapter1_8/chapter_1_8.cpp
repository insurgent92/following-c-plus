// literal ���ͷ� (�� �״��?)
// Operand �ǿ�����
// ���� (Unary), �̻� (binary), ����(ternary)

#include <iostream>

int main() {
	int x = 2; // x is a variable, 2 is a literal 
	// 2�� �� �״�� ����? �޸� ������ ��� ���� �ٲٰ� ����� �ٽ��ϰ� ���� ����. 
	// �׷� �޸� ������ ���� �ʴ°�? 
	
	x = 2; 
	// '=' �� ������. ���� �������� 

	std::cout << x + 2 << std::endl;
	//���⿡�� x�� 2�� �� ��������. 

	//�� ���� ���ڿ��� ���ͷ��� 
	std::cout << "Hello, world!" << std::endl;

	//���׿�����
	-x; // x�� negative�� �ٲٴ� �������� 

	//���� ������
	x == 1 ? 2 : 2;


	return 0;
}