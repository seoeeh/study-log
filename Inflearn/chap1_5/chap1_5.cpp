#include <iostream>

using namespace std;

void print()
{
	cout << "Hello" << endl;

}



int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;

	return sum;

	print();
}


void printHelloWorld() //기능 수행 함수라서 main 함수에 return할 값이 없다, 따라서 return data type: void
{
	cout << "Hello World" << endl;
	
	return; //꼭안써도됨, 반환해서 main으로 돌아감

	cout << "Hello World2" << endl; //return 뒤라서 실행 안 됨
}

int main()
{

	cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;

	printHelloWorld();

	return 0;
}