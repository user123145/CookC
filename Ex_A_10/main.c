#include <stdio.h>

int main() {
	int year;
	printf("연도 입력 : ");
	scanf("%d",&year);
	
	if (((year%4==0)&&(year%100!=0))|| (year%400==0)){
		printf("%d 는 윤년입니다.",year);
	}else{
		printf("%d 는 윤년이 아닙니다.",year);
	}
	
	
	
	return 0;
}
