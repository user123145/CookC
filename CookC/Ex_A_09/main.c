#include <stdio.h>

void main() 
{
	
	
	int c500, c100, c50, c10, money;
	
	printf("바꿀돈 입력 : ");
	scanf("%d",&money);
	
	c500 = money / 500;
	money = money%500;
	printf("500원 개수 : %d\n",c500);
	c100 = money / 100;
	money = money%100;
	printf("100원 개수 : %d\n",c100);
	c50 = money/50;
	money = money%50;
	printf("50원 개수 : %d\n",c50);
	c10 = money / 10;
	money = money%10;
	printf("10원 개수 : %d\n",c10);
	printf("바꾸지 못한 돈 : %d",money);

}
