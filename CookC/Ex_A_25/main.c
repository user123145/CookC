#include <stdio.h>
void main()
{
    int a, b;
    printf("값 a, b를 입력해주세요");
    scanf("%d %d", &a, &b);

    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    pirntf("값 교환완료\n")
        printf("a : %d\n", a);
    printf("b : %d", b);
}