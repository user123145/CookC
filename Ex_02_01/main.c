#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, d;
	int result;
	
	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf("%d",&a);
	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf("%d",&b);
	printf("세 번째 계산할 값을 입력하세요 ==>");
	scanf("%d",&c);
	printf("네 번째 계산할 값을 입력하세요 ==>");
	scanf("%d",&d);
	
	result = a+b+c+d;
	printf("%d + %d + %d + %d = %d",a,b,c,d,result);
}
