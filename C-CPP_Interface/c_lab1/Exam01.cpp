// C++ 표준 console 출력

#include <iostream>		// #include 전처리 - 파일 복사해서 넣어주는 작업
#include <cstdio>
#include "driver.h"		// driver.h 전체 복사됨
using namespace std;

extern "C" int c_add_sqr(int a, int b);		// Exam02.c에 있는 함수 호출 위해서 extern 선언
											// "C" - C 스타일로 정의되어 있는 프로그램이야 라고 알려주는 코드

extern "C" int cpp_sqr(int a)				// C++함수이지만 C에서 이 함수를 호출할 수 있도록  extern "C"로 감싸고 있다.
{											// "C" -> C++ 코드에서 C 스타일로 링킹되도록 만드는 것
	return a * a;							// C++의 이름 변경(name mangling)을 피하고, C 스타일로 함수가 링크
}

int main()
{
	cout << c_add_sqr(3, 5) << endl;	
	cout << driver_sub(3, 5) << endl;
}
