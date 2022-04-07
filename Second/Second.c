#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int result;
	
	a=100;
	b=50;
	
	result = a + b;
	printf("%d + %d = %d \n", a,b, result);
	
	result =a - b;
	printf("%d - %d = %d \n", a, b, result );
	
	result =a * b;
	printf("%d * %d = %d \n", a, b, result );
	
	result =a / b;
	printf("%d / %d = %d \n", a, b, result );
	
}
