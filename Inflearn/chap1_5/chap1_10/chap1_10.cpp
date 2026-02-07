#include <iostream>

using namespace std;

// forward declaration(프로토타입)
int add(int a, int b); 
int multiply(int a, int b);
int subtract(int a, int b);

int main()
{
	cout << add(1, 2) << endl;
	cout << multiply(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}


// definition
int add(int a, int b) // 입력: int a, int b, 출력: int 하나 <-최소한의 정보는 맨 위 한줄로 알 수 있다
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}

