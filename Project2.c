/*
�̸�: �Ѱ���
��¥: 20230823
����: ���Ǻ� Compiler ������ #ifdef, #undef ����غ���
*/


#include <stdio.h>

#define PI 3.141592
#define R 5

int main()
{
	double area;

#ifdef PI
	printf("PI = 3.141592\n");
#endif

#undef R         //R�� ���� ����
#define R 3       //R�� 3���� ������

	area = PI * R * R;
	printf("Radius = %d\nArea = %.2lf\n", R, area);
	return 0;

}