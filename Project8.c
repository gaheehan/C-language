/*
�̸�: �Ѱ���
��¥: 20230823
����: ���޵� �迭�� ����� ���ϴ� �Լ� �����*/


#include <stdio.h>

double compute_avg(int arr[], int n);

int main() {
	int notebook[4] = { 4500, 5370, 4920, 6090 };
	int pencil[5] = { 120, 230, 450, 540, 650 };
	double average;

	average = compute_avg(notebook, 4);
	printf("��Ʈ ��� �Ǹż�: %.lf \n", average);

	average = compute_avg(pencil, 5);
	printf("���� ��� �Ǹż�: %.lf \n", average);
	
	return 0;
}

double compute_avg(int arr[], int n) {
	int i, sum = 0;
	for (i = 0; i < n; i++) sum = sum + arr[i];
	
	return (double)sum / n;

}