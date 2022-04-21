#include <stdio.h>


int main(int argc, char *argv[]) {
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	if (a%2==0){
		printf("짝수 입니다.");
	
	}else{
		printf("홀수 입니다.");
	} 
	
	return 0;
}
