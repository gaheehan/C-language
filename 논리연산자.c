#include <stdio.h>

int main(void)
{
	int x,y;
	
	scanf("%d %d",&x,&y);
	printf("%d", (x|y)&(x|(~y)));
	
	
	return 0;
}

//비트 연산자 이용 1입력시 -2 나옴! 0001 -> 1110 으로 해 석 
