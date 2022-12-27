#include <stdio.h>


void tri(void){
	float x,y;
	printf("삼각형의 밑변과 높이 입력:"); scanf("%f %f", &x,&y);
	printf("삼각형의 넓이: %.2f", x*y/2);
}

void Squ(void){
	int x,y;
	printf("사각형의 가로와 세로 입력:"); scanf("%d %d",&x,&y);
	printf("사각형의 넓이: %d", x*y);
}

void Cir(void){
	float r;
	printf("원의 반지름 입력:"); scanf("%f", &r);
	printf("원의 넓이: %.2f", r*r*3.14); 
}

void main(void)
{
	int op;
	
	printf("1.삼각형\n2.사각형\n3.원\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			tri();
			break;
		case 2:
			Squ();
			break; 
		case 3:
			Cir();
			break; 
		default:
			printf("잘못입력하셨습니다. \n");
		 
	}
	return 0;
}
