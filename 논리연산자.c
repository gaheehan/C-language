#include <stdio.h>

int main(void)
{
	int x,y;
	
	scanf("%d %d",&x,&y);
	printf("%d", (x|y)&(x|(~y)));
	
	
	return 0;
}

//��Ʈ ������ �̿� 1�Է½� -2 ����! 0001 -> 1110 ���� �� �� 
