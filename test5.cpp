/* �̸�: �Ѱ���
* ��¥: 230822
* ���ڿ� ���� �Է� �Լ� gets_s*/

#include <stdio.h>

int main()
{
	char address[30];
	printf("�ּҴ�? ");
	gets_s(address);
	printf("�Է��� �ּ�: %s", address);
	return 0;
}