/*
이름: 한가희
날짜: 20230823
문제: 총 근로 시간으로부터 오늘의 임금을 계산하기*/

#include <stdio.h>
int get_pay(int hours, int day_rate, int hour_rate); // 함수의 원형 선언

int main() {
	int total_hours;								//근로 시간
	int daily_rate = 100000, hourly_rate = 10000;	//일급, 시급
	int pay;

	printf("근로 시간은? ");
	scanf_s("%d", &total_hours);

	pay = get_pay(total_hours, daily_rate, hourly_rate);    //함수 호출
	printf("오늘의 임금은 %d원 \n", pay);

	return 0;
}

int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return(day * day_rate + hours * hour_rate);
}