/* �̸�: �Ѱ��� 
  ��¥: 230822
  �� ���� �Է¹޾� ��� ������ ����ϱ� */

#include <stdio.h>

int main()
{
	int n1, n2;
	printf("�� ���� �Է�>>"); 
	scanf_s("%d %d", &n1, &n2); // �� ���� �Է� �ޱ�

	int max, min;
	(n1 > n2) ? (max = n1, min = n2) : (min = n1, max = n2); // ���ǿ�����

	printf("ū ���� ���� ���� ���� ��: %d \n", max / min);
	printf("ū ���� ���� ���� ���� ������: %d \n", max % min);
	
	return 0;
}// end of main