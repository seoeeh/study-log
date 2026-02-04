#include <iostream>

int main()
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;

	int y = x;
	std::cout << y << std::endl;

	//is (x+y) l-value or r-value? r, 왜냐하면 주소가 없는 임시값
	std::cout << x + y << std::endl;

	std::cout << x << std::endl;


	//warning, 초기화 안 함
	int z=0;
	std::cout << z << std::endl;

	return 0;

}