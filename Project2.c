/*
이름: 한가희
날짜: 20230823
문제: 조건부 Compiler 지시자 #ifdef, #undef 사용해보기
*/


#include <stdio.h>

#define PI 3.141592
#define R 5

int main()
{
	double area;

#ifdef PI
	printf("PI = 3.141592\n");
#endif

#undef R         //R의 정의 해제
#define R 3       //R을 3으로 재정의

	area = PI * R * R;
	printf("Radius = %d\nArea = %.2lf\n", R, area);
	return 0;

}