/*
이름: 한가희
날짜: 20230823
문제: 1차원 배열 연습
*/

#include <stdio.h>
#define PERSONS 30    //설문 조사 응답수
#define STARS 6		  //연예인 번호와 vote 배열의 첨자를 일치시키기 위해 연예인 수 +1

int main()
{
	int survey[PERSONS] = { 1,2,3,4,5, 1,5,4,5,2, 4,4,3,3,2, 1,2,1,1,3, 5,5,3,2,2, 5,3,5,3,2 };
	
	int vote[STARS] = {0,0,0,0,0,0};   //{};해도 문법은 맞지만 노트북 버그로 초기값 설정해줌 
	int i;

	for (i = 0; i < PERSONS; i++) {
		vote[survey[i]]++;			// 연예인(survey[i])의 득표수를 1증가	
	}

	printf("연예인 득표수\n");
	printf("==================================\n");

	for (i = 1; i < STARS; i++) {					//vote[0]에는 저장되지 않음
		printf("	%d번		%d표 \n", i, vote[i]);
	}

	return 0;
}