/*
�̸�: �Ѱ���
��¥: 20230823
����: �� �ٷ� �ð����κ��� ������ �ӱ��� ����ϱ�*/

#include <stdio.h>
int get_pay(int hours, int day_rate, int hour_rate); // �Լ��� ���� ����

int main() {
	int total_hours;								//�ٷ� �ð�
	int daily_rate = 100000, hourly_rate = 10000;	//�ϱ�, �ñ�
	int pay;

	printf("�ٷ� �ð���? ");
	scanf_s("%d", &total_hours);

	pay = get_pay(total_hours, daily_rate, hourly_rate);    //�Լ� ȣ��
	printf("������ �ӱ��� %d�� \n", pay);

	return 0;
}

int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return(day * day_rate + hours * hour_rate);
}