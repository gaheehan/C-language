#include <stdio.h>

int main(void)
{
	int a, b, op, n, i, res, ans, o=0, x=0;
	char oper;
	
	printf("문제 생성 반복 횟수를 입력하시오 >>");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		a = rand() % 100;
		b = rand() % 100;
		op = (rand() % 4) + 1; 
		
		switch(op){
			case 1:
				oper = '+';
				res = a+b;
				break;
			case 2:
				oper = '-';
				res = a-b;
				break;
			case 3:
				oper = '*';
				res = a*b;
				break;
			case 4:
				oper = '/';
				if(b==0){
					printf("0으로 나눌 수 없습니다.");
					continue; 
				}
				res = a/b;
				break;
    		}
	    printf("%d번 문제: %d %c %d =\n", i, a,oper,b);
	    printf("정답을 입력하시오 >> ");
	    scanf("%d", &ans);
		if(ans == res){
			printf("맞았습니다.\n");
			o++;
		}
		else{
			printf("틀렸습니다.\n");
			x++;
		} 
	}
	
	printf("맞은 문제: %d \t 틀린 문제: %d \n", o,x);
	return 0;
}
