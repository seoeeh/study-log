#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y; // indenting: 여백 띄우기
}

int main()
{
	cout << "hello, world " << "abcdef " <<   // <<(operator)를 남겨두면 밑줄로 이어진다는 걸 안다
		"Hello Home" << endl;


	//tab키로 줄맞춤
	int my_v			= 1;
	int x				= 4;
	int num_apples		= 123;


	//this is important
	int k = 1 + 2; 

	//this is important, too(위 한줄 띄우면 센스가있다)
	int y = 3 + 4;


	return 0;

}