#include <iostream> //input output stream: cout, cin, endl, ... 등이 들어있음
#include <cstdio> //printf

int main()
{
	using namespace std; //{} 안에서는 std:: 떼도 됨

	int x = 1024;
	double pi = 3.141592;

	//std: namespace std(이름공간, 명칭공간) 안의 cout을 사용하기 위해 ::을 넣어준다
	std::cout << "I love this lecture\n"; // << std::endl; , \n: 다음 줄로 넘어가라(std::endl과 거의 같은 기능)
	std::cout << "x is "<< x << "pi is " << pi << std::endl;


	// \t: 자동 줄맞춤 기능이 있는 tab
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	cout << "\a"; //audio: 소리출력

	//printf("I love this lecture!");





	int y = 1; //초기화

	cout << "Befor your input, y was " << y << endl;
	
	//입력받는다 = 어딘가에 저장해야한다


	cin >> y;

	cout << "Your input is " << y << endl;

	return 0;
}