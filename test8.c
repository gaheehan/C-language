/* 
이름: 한가희
날짜: 20230822
문제: 사용자에게서 입력받은 문자의 실제 비트열(8비트) 출력하기 */

#include <stdio.h>

int main()
{
	char ch;
	printf("문자 입력: ");
	scanf_s("%c", &ch); // ASCII코드 입력받기
	
	printf("%2d", ch & (1 << 7) ? 1 : 0);  // 7번째 비트 연산
	printf("%2d", ch & (1 << 6) ? 1 : 0);  // 6번째 비트 연산
	printf("%2d", ch & (1 << 5) ? 1 : 0);  // 5번째 비트 연산
	printf("%2d", ch & (1 << 4) ? 1 : 0);  // 4번째 비트 연산
	printf("%2d", ch & (1 << 3) ? 1 : 0);  // 3번째 비트 연산
	printf("%2d", ch & (1 << 2) ? 1 : 0);  // 2번째 비트 연산
	printf("%2d", ch & (1 << 1) ? 1 : 0);  // 1번째 비트 연산
	printf("%2d", ch & (1) ? 1 : 0);

	return 0;
}  // end of main