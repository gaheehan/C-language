/*
�̸�: �Ѱ���
��¥: 20230822
����: switch������ ���⸸��� 
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	char k;

	printf("������ ���ٷ� ����� �Է��ϼ���: ");
	scanf_s("%d %c %d", &num1, &k, 1, &num2);  // scanf_s ����� ��� ������ ������ �˷��־�� �Ѵ�.

	switch (k){
		case '+': printf("%d + %d = %d �Դϴ�.\n", num1, num2, num1 + num2);
			break;
		case '-': printf("%d - %d = %d �Դϴ�.\n", num1, num2, num1 - num2);
			break;
		case '*': printf("%d * %d = %d �Դϴ�.\n", num1, num2, num1 * num2);
			break;
		case '/': printf("%d / %d = %d �Դϴ�.\n", num1, num2, num1 / num2);
			break;
		case '%': printf("%d %% %d = %d �Դϴ�.\n", num1, num2, num1 % num2);
			break;
		default: printf("�����ڸ� �� �� �Է��߽��ϴ�.\n"); break;
	}
}