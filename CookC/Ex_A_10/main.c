#include <stdio.h>

int main() {
	int year;
	printf("���� �Է� : ");
	scanf("%d",&year);
	
	if (((year%4==0)&&(year%100!=0))|| (year%400==0)){
		printf("%d �� �����Դϴ�.",year);
	}else{
		printf("%d �� ������ �ƴմϴ�.",year);
	}
	
	
	
	return 0;
}
