#include <stdio.h>

void main()
{
	int a, b;
	int result;
	char k;
	
	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &a);
	printf("+-*/% ==>");
	scanf(" %c", &k);
	printf("두 번째 계산할 값 ==> ");
	scanf("%d", &b);
	
	if(k=='+'){
		result = a+b;
		printf(" %d + %d = %d \n", a, b, result);
		
	}
	
	if(k=='-'){
		result = a-b;
		printf(" %d - %d = %d \n", a, b, result);
		
	}
	
	if(k=='*'){
		result = a*b;
		printf(" %d * %d = %d \n", a, b, result);
		
	}
	
	if(k=='/'){//0 으로 나누었을때의 오류를 없애야하는부분.
			if(b!=0){
		result = a/b;
		printf(" %d / %d = %d \n", a, b, result);}
		else
		printf(" 0으로 나눌수 없습니다.");
		
	}
	
	if(k=='%'){//0 으로 나누었을때의 오류를 없애야하는부분.
		if(b!=0){
		result = a%b;
		printf(" %d % %d = %d \n", a, b, result);}
		else
		printf(" 0으로 나눌수 없습니다.");
		
	}
	
	
}
