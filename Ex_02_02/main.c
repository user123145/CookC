#include <stdio.h>
//67������ ���� 22.03.25
 


	void main(){
		int a,b;//����� ���� 
		int result;//������ 
		int k; //��� ������ ����
		
		printf("ù ��° ����� ���� �Է��ϼ���==>");
		scanf("%d",&a);
		
		printf("<1>���� <2>���� <3> ���� <4> ������ ==>");
		scanf("%d",&k);
		
		printf("�� ��° ����� ���� �Է��ϼ���==>");
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


