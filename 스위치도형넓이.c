#include <stdio.h>


void tri(void){
	float x,y;
	printf("�ﰢ���� �غ��� ���� �Է�:"); scanf("%f %f", &x,&y);
	printf("�ﰢ���� ����: %.2f", x*y/2);
}

void Squ(void){
	int x,y;
	printf("�簢���� ���ο� ���� �Է�:"); scanf("%d %d",&x,&y);
	printf("�簢���� ����: %d", x*y);
}

void Cir(void){
	float r;
	printf("���� ������ �Է�:"); scanf("%f", &r);
	printf("���� ����: %.2f", r*r*3.14); 
}

void main(void)
{
	int op;
	
	printf("1.�ﰢ��\n2.�簢��\n3.��\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			tri();
			break;
		case 2:
			Squ();
			break; 
		case 3:
			Cir();
			break; 
		default:
			printf("�߸��Է��ϼ̽��ϴ�. \n");
		 
	}
	return 0;
}
