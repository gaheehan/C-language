/*
�̸�: �Ѱ���
��¥: 20230823
����: �� �߿��� �� ū ���� ��ȯ�ϴ� �Լ� */

#include <stdio.h>
int find_larger(int first, int second) {
	int larger;
	(first > second) ? (larger = first) : (larger = second);
	return larger;
}

int main()
{
	int n1, n2, max;
	printf("ù° ����? "); scanf_s("%d", &n1);
	printf("��° ����? "); scanf_s("%d", &n2);
	max = find_larger(n1, n2);
	printf("%d, %d �� ū ���� %d \n", n1, n2, max);
	return 0;
}