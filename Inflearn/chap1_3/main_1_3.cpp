#include <iostream>

int main()
{
	//x는 변수명: 메모리에 있는 공간의 이름, x라는 변수 이름이 가리키는 변수 공간에 123이라는 정수를 저장해놓음
	// '='는 assignment operator

	int x = 123; // initialization

	x = 5; // assignment

	std::cout << x << std::endl;
	std::cout << &x << std::endl;



	return 0;
}