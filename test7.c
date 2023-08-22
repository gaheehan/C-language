/* 이름: 한가희 
  날짜: 230822
  두 수를 입력받아 몫과 나머지 출력하기 */

#include <stdio.h>

int main()
{
	int n1, n2;
	printf("두 정수 입력>>"); 
	scanf_s("%d %d", &n1, &n2); // 두 정수 입력 받기

	int max, min;
	(n1 > n2) ? (max = n1, min = n2) : (min = n1, max = n2); // 조건연산자

	printf("큰 수를 작은 수로 나눈 몫: %d \n", max / min);
	printf("큰 수를 작은 수로 나눈 나머지: %d \n", max % min);
	
	return 0;
}// end of main