#include <stdio.h>


//�������� flag ���°� ������ �� �ַ� ��� 
int flagZero = 0;

void MLBprint(unsigned short int t){
	
	unsigned short int y = 0b1000000000000000;
	
	if((t&y) == 0b1000000000000000){
	    printf("1");
	     flagZero = 1;
	}
	else if(flagZero == 1)
	    printf("0");
}


int main(void)
{
	unsigned short int x,y;
	int i,len;
	len = sizeof(unsigned short int)*8;
	
	printf("���ڸ� �Է����ּ���: \n");
	scanf("%d",&x);
	
	 
	for(i=0;i<len;i++){
		y = x << i;
		MLBprint(y);}
}
