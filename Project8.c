/*
이름: 한가희
날짜: 20230823
문제: 전달된 배열의 평균을 구하는 함수 만들기*/


#include <stdio.h>

double compute_avg(int arr[], int n);

int main() {
	int notebook[4] = { 4500, 5370, 4920, 6090 };
	int pencil[5] = { 120, 230, 450, 540, 650 };
	double average;

	average = compute_avg(notebook, 4);
	printf("노트 평균 판매수: %.lf \n", average);

	average = compute_avg(pencil, 5);
	printf("연필 평균 판매수: %.lf \n", average);
	
	return 0;
}

double compute_avg(int arr[], int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) sum = sum + arr[i];
	
	return (double)sum / n;

}