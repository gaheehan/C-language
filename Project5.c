/*
�̸�: �Ѱ���
��¥: 20230823
����: 2���� �迭 ���α׷�
*/


#include <stdio.h>
#define M 2 //�� ����
#define N 3 //�� ����

int main() {
	int A[M][N], B[M][N], C[M][N]; //MxN���
	int i, j;

	printf("\n��� A �Է�\n");   //��� A �Է�
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d�� %d��? ", i + 1, j + 1);
			scanf_s("%d", &A[i][j]);
		} // end of for(N)
	} // end of for(M)

	printf("\n��� B �Է�\n");   //��� B �Է�
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d�� %d��? ", i + 1, j + 1);
			scanf_s("%d", &B[i][j]);
		} // end of for(N)
	} // end of for(M)

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			C[i][j] = A[i][j] + B[i][j];
		} // end of for(N)
	} // end of for(M)

	/*���� ��� ����ϱ�*/
	printf("\n ���A  +\t���B  =\t���C\n");
	for (i = 0; i < M; i++) {
		/* ��� A�� �� �� ���*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", A[i][j]);
		} // end of for(N)
		printf("]\t");

		/* ��� B�� �� �� ���*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", B[i][j]);
		} // end of for(N)
		printf("]\t");

		/* ��� C�� �� �� ���*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", C[i][j]);
		} // end of for(N)
		printf("]\n");
	} // end of for(M)

	return 0;
} // end of main