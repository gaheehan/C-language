/*
이름: 한가희
날짜: 20230822
문제: switch문으로 계산기만들기 
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	char k;

	printf("수식을 한줄로 띄어쓰기로 입력하세요: ");
	scanf_s("%d %c %d", &num1, &k, 1, &num2);  // scanf_s 사용의 경우 문자의 개수를 알려주어야 한다.

	switch (k){
		case '+': printf("%d + %d = %d 입니다.\n", num1, num2, num1 + num2);
			break;
		case '-': printf("%d - %d = %d 입니다.\n", num1, num2, num1 - num2);
			break;
		case '*': printf("%d * %d = %d 입니다.\n", num1, num2, num1 * num2);
			break;
		case '/': printf("%d / %d = %d 입니다.\n", num1, num2, num1 / num2);
			break;
		case '%': printf("%d %% %d = %d 입니다.\n", num1, num2, num1 % num2);
			break;
		default: printf("연산자를 잘 못 입력했습니다.\n"); break;
	}
}