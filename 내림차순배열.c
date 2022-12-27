#include <stdio.h>

int main(void)
{
	int arr[5];
	int rank[5] = {0,0,0,0,0};
	int i,j,t1,t2; 
	
	scanf("%d %d %d %d %d",arr, arr+1, arr+2, arr+3, arr+4);
	
	for(i=0; i<5; i++){
		t1 = arr[i];
		for(j=0; j<5; j++){
			if(t1 > rank[j]){
				t2=t1;
				t1=rank[j];
				rank[j] = t2;
		    }
	    }
	}
	
	for(i=0;i<5;i++){
		printf("%d=", arr[i]);
		for(j=0;j<5;j++){
			if(arr[i] == rank[j]){
				printf("r%d ",j+1);
				break;
			}
		}
	}
	    
	    
	return 0;
	
}

