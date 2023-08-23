/*
이름: 한가희
날짜: 20230823
문제: 둘 중에서 더 큰 수를 반환하는 함수 */

#include <stdio.h>
int find_larger(int first, int second) {
	int larger;
	(first > second) ? (larger = first) : (larger = second);
	return larger;
}

int main()
{
	int n1, n2, max;
	printf("첫째 정수? "); scanf_s("%d", &n1);
	printf("둘째 정수? "); scanf_s("%d", &n2);
	max = find_larger(n1, n2);
	printf("%d, %d 중 큰 값은 %d \n", n1, n2, max);
	return 0;
}