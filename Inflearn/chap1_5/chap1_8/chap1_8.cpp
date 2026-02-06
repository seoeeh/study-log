#include <iostream>

using namespace std;

int main()
{
	int x = 2; // x is a variable(변수, 메모리 주소 갖는 것), 2 is a literal, = is 대입 연산자

	
	cout << "My Home" << endl; // 문자열도 literal
	cout << -3 << endl; // 단항연산자
	cout << 1 + 2 << endl; // 1, 2는 literal, 1+2는 expression(표현식), 1과 2를 관계짓는 +는 연산자(operator)
	cout << x + 2 << endl; // 2+2 변수 안의 값을 연산한다, operator 양쪽 x와 2가 연산의 대상(피연산자 operand)

	int y = (x > 0) ? 1 : 2; //삼항연산자

	cout << y << endl;
	return 0;
}