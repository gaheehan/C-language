#include <stdio.h>

void MLBpritnt(unsigned short int t){
	
	unsigned short int y=0b1000000000000000;
	
	if((t&y) == 0b1000000000000000)
	    printf("1");
	else
	    printf("0");
}


int main(void)
{
	unsigned short int x;
	
	x = 0b1001010000111000;
	x = x << 2; 
	MLBprint(x);
}
