#include <stdio.h>

int arrTest(int *x,int len){
	int i, sum=0;
	for(i=0;i<len;i++)
	    *(x+i) *= 2;
}

void main(void)
{
	int arr[5] = {1,2,3,4,5};
	int i;
	
	for(i=0;i<sizeof(arr)/sizeof(int);i++)
	    printf("%d\t", arr[i]);
	printf("\n");
	arrTest(arr,sizeof(arr)/sizeof(int));
	
	for(i=0;i<sizeof(arr)/sizeof(int);i++)
	    printf("%d\t",arr[i]);
	
}
