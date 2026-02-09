#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false; 
	cout << bValue << endl; // bool도 내부적으로는 숫자로 저장

	char chValue = 'A';
	cout << (int)chValue << " " << chValue << endl;

	char chValue2 = 72; 
	cout << chValue2 << endl; // char도 결국 숫자로 저장

	float fValue = 3.141592f;
	double dValue = 3.141592;
	cout << fValue << endl;
	cout << dValue << endl;

	// auto: 자동으로 type 결정
	auto aValue = 3.141592; 
	auto aValue2 = 3.141592f;

	//sizeof()
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;

	//여러개 변수 동시 선언 가능
	int k, l, m; 
	int a, b, c = 33; //일부만 초기화 가능, 권장x
	int d = 1, e = 2, f = 4;


	return 0;
}