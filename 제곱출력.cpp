#include <stdio.h>

int count = 0;

int S(int a){
	count++;
	return a*a;
}

int main(void)
{
	int x;
	while(1){
		scanf("%d", &x);
		
		if(x != 0)
		    printf("%d\n", S(x));
		else
		    break;
	}
	printf("%d�� ����\n",count);
	
	return 0;
}
