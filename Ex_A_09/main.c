#include <stdio.h>

void main() 
{
	
	
	int c500, c100, c50, c10, money;
	
	printf("�ٲܵ� �Է� : ");
	scanf("%d",&money);
	
	c500 = money / 500;
	money = money%500;
	printf("500�� ���� : %d\n",c500);
	c100 = money / 100;
	money = money%100;
	printf("100�� ���� : %d\n",c100);
	c50 = money/50;
	money = money%50;
	printf("50�� ���� : %d\n",c50);
	c10 = money / 10;
	money = money%10;
	printf("10�� ���� : %d\n",c10);
	printf("�ٲ��� ���� �� : %d",money);

}
