#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, d;
	int result;
	
	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d",&a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d",&b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d",&c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d",&d);
	
	result = a+b+c+d;
	printf("%d + %d + %d + %d = %d",a,b,c,d,result);
}
