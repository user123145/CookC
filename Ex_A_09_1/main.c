#include <stdio.h>

int main()
{
	int k50,k10,k1,money;
	
	printf("����� ��ȯ�� �� : ");
	scanf("%d",&money);
	k50 = money/50000;
	money = money%50000;
	k10 = money/10000;
	money = money%10000;
	k1 = money/1000;
	money = money%1000;
	
	printf("5������ : %d\n",k50);
	printf("1������ : %d\n",k10);
	printf("õ���� : %d\n",k1);
	printf("���ٲ۵� : %d",money);

}
