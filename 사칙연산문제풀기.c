#include <stdio.h>

int main(void)
{
	int a, b, op, n, i, res, ans, o=0, x=0;
	char oper;
	
	printf("���� ���� �ݺ� Ƚ���� �Է��Ͻÿ� >>");
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
					printf("0���� ���� �� �����ϴ�.");
					continue; 
				}
				res = a/b;
				break;
    		}
	    printf("%d�� ����: %d %c %d =\n", i, a,oper,b);
	    printf("������ �Է��Ͻÿ� >> ");
	    scanf("%d", &ans);
		if(ans == res){
			printf("�¾ҽ��ϴ�.\n");
			o++;
		}
		else{
			printf("Ʋ�Ƚ��ϴ�.\n");
			x++;
		} 
	}
	
	printf("���� ����: %d \t Ʋ�� ����: %d \n", o,x);
	return 0;
}
