/*
이름: 한가희
날짜: 20230823
문제: 2차원 배열 프로그램
*/


#include <stdio.h>
#define M 2 //행 개수
#define N 3 //열 개수

int main() {
	int A[M][N], B[M][N], C[M][N]; //MxN행렬
	int i, j;

	printf("\n행렬 A 입력\n");   //행렬 A 입력
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d행 %d열? ", i + 1, j + 1);
			scanf_s("%d", &A[i][j]);
		} // end of for(행)
	} // end of for(열)

	printf("\n행렬 B 입력\n");   //행렬 B 입력
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d행 %d열? ", i + 1, j + 1);
			scanf_s("%d", &B[i][j]);
		} // end of for(행)
	} // end of for(열)

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			C[i][j] = A[i][j] + B[i][j];
		} // end of for(행)
	} // end of for(열)

	/*덧셈 결과 출력하기*/
	printf("\n 행렬A  +\t행렬B  =\t행렬C\n");
	for (i = 0; i < M; i++) {
		/* 행렬 A의 한 행 출력*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", A[i][j]);
		} // end of for(행)
		printf("]\t");

		/* 행렬 B의 한 행 출력*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", B[i][j]);
		} // end of for(행)
		printf("]\t");

		/* 행렬 C의 한 행 출력*/
		printf("[");
		for (j = 0; j < N; j++) {
			printf("%3d ", C[i][j]);
		} // end of for(행)
		printf("]\n");
	} // end of for(열)

	return 0;
} // end of main