#include <stdio.h>
//67페이지 예제 22.03.25
 


	void main(){
		int a,b;//연산될 숫자 
		int result;//연산결과 
		int k; //계산 연산자 종류
		
		printf("첫 번째 계산할 값을 입력하세요==>");
		scanf("%d",&a);
		
		printf("<1>덧셈 <2>뺄셈 <3> 곱셈 <4> 나눗셈 ==>");
		scanf("%d",&k);
		
		printf("두 번째 계산할 값을 입력하세요==>");
		scanf("%d",&b);
		
		
		if (k==1){
			result = a + b;
			printf("%d + %d = %d",a,b,result);
			
		}
		
		if (k==2){
			result = a - b;
			printf("%d - %d = %d",a,b,result);
			
		}
		
		if (k==3){
			result = a * b;
			printf("%d * %d = %d",a,b,result);
			
		}
		
		if (k==4){
			result = a / b;
			printf("%d / %d = %d",a,b,result);
			
		}
		
	 
	
	
	
}


