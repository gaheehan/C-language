/* 
�̸�: �Ѱ���
��¥: 20230822
����: ����ڿ��Լ� �Է¹��� ������ ���� ��Ʈ��(8��Ʈ) ����ϱ� */

#include <stdio.h>

int main()
{
	char ch;
	printf("���� �Է�: ");
	scanf_s("%c", &ch);
	
	printf("%2d", ch & (1 << 7) ? 1 : 0);
	printf("%2d", ch & (1 << 6) ? 1 : 0);
	printf("%2d", ch & (1 << 5) ? 1 : 0);
	printf("%2d", ch & (1 << 4) ? 1 : 0);
	printf("%2d", ch & (1 << 3) ? 1 : 0);
	printf("%2d", ch & (1 << 2) ? 1 : 0);
	printf("%2d", ch & (1 << 1) ? 1 : 0);
	printf("%2d", ch & (1) ? 1 : 0);

	return 0;
}