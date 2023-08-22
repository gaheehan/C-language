/* 이름: 한가희
* 날짜: 230822
* 문자열 전용 입력 함수 gets_s*/

#include <stdio.h>

int main()
{
	char address[30];
	printf("주소는? ");
	gets_s(address);
	printf("입력한 주소: %s", address);
	return 0;
}