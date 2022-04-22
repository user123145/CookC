#include <stdio.h>

int main()
{
	int k50,k10,k1,money;
	
	printf("지폐로 교환할 돈 : ");
	scanf("%d",&money);
	k50 = money/50000;
	money = money%50000;
	k10 = money/10000;
	money = money%10000;
	k1 = money/1000;
	money = money%1000;
	
	printf("5만원권 : %d\n",k50);
	printf("1만원권 : %d\n",k10);
	printf("천원권 : %d\n",k1);
	printf("못바꾼돈 : %d",money);

}
