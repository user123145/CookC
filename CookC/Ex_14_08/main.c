#include <stdio.h>
void exchange();

int a, b;

int main(void)
{
    printf("a 의 값을 입력 : ");
    scanf("%d", &a);
    printf("b 의 값을 입력 : ");
    scanf("%d", &b);

    exchange();

    printf("\n바뀐 값 a 는 %d , b 는 %d \n", a, b);

    return 0;
}