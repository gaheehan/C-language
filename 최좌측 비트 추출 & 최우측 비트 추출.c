#include <stdio.h>

void MLBprint(unsigned short int t){
	
	unsigned short int y = 0b1000000000000000;
	
	if((t&y))
	    printf("1");
	else
	    printf("0");
	
}

void MRBprint(unsigned short int t){
	
	unsigned short int y = 0b0000000000000001;
	
	if((t&y))
	    printf("1");
	else
	    printf("0");  
}

int main(void)
{
	unsigned short int x,y;
	int i, len;
	len = sizeof(unsigned short int)*8;
	
	x = 0b0001001000111100;
	
	for(i=0;i<len;i++){
		y = x << i;
		MLBprint(y);
	}
	printf("\n");
	for(i=0;i<len;i++){
		y = x >> i;
		MRBprint(y);
	}
	
}
