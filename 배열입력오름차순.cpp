#include <stdio.h>

void Sort(int *x, int len){
	int key,temp,i;
	
	for(i=0; i<len-1 ; i++){
	    for(key=0; key< len-1 ; key++){
		    if(*(x+key-1) > *(x+key)){
			    temp = *(x+key-1);
			    *(x+key-1) = *(x+key);
			    *(x+key) = temp;
		    }
	    } 
	}
}

int main (void)
{

	int arr[5];
	int i,arrLen;
	arrLen = sizeof(arr)/sizeof(int);
	for(i=0; i < arrLen; i++){
		printf("arr[%d]:", i);
	    scanf("%d", &arr[i]);
	}
	printf("\n");    
	Sort(arr, arrLen);
	
	for(i=0; i< arrLen; i++)
	    printf("arr[%d]:%d\n",i,arr[i]);	
	
	return 0; 
}
