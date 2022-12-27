#include <stdio.h>

void ShowArr(int *arr, int len)
{
	int i;
	for(i=0; i<len; i++)
	    printf("%d\t", *(arr+i));
	printf("\n");
	
}

int main(void)
{
	int arr1[3] = {1,2,3};
	int arr2[5] = {4,5,6,7,8};
	
	ShowArr(arr1, sizeof(arr1)/sizeof(int));
	ShowArr(&arr2[0], sizeof(arr2)/sizeof(int));
	
	return 0;
}
