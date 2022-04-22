#include <stdio.h>

void main(){
	
	int a,b;
	int result;
	
	printf("첫번째 값 입력" );
	scanf("%d",&a);
	
	
	printf("첫번째 값 입력");
	scanf("%d",&b);
	
	result = a + b;
	printf("%d + %d = %d \n", a, b, result);
	
	result = a - b;
	printf("%d - %d = %d \n", a, b, result);
	
	result = a * b;
	printf("%d * %d = %d \n", a, b, result);
	
	result = a / b;
	printf("%d / %d = %d \n", a, b, result);
	
}
