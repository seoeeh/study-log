#include <iostream> //iostream: input, output stream, #: 전처리기(preprocessor directive) for 남이만든 출력함수 사용

int main(void) 

{
	int x = 2; //변수 선언: integer라는 정수형 데이터를 담을 메모리 공간을 할당받음, x라는 이름의 공간에 2를 저장
	x = 5; //2, 3, 4, 같은 것들: 리터럴, literal 
	int y = x + 3; //2, 3은 숫자, x는 바뀔 수 있는 변수
	
	std::cout << y << std::endl;
	//출력 기능 함수, namespace::cout(namespace 안에 cout), std: 스탠다드 라이브러리의 일부(도서관에서 필요한 기능 빼오기)

	//

	return 0;
}