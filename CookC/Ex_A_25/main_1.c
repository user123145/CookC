#include <stdio.h>
void main()
{
    int a, b, tmp;
    int *p1, *p2;

    printf("a 값 입력 : ");
    scanf("%d", &a);
    printf("b 값 입력 : ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    tmp = *p1;

    // a = *p2;
    //*p1 하면 값만 가져오는게 아니라 실제 메모리에 있는 값을 접근
    *p1 = *p2;

    b = tmp;

    printf("바뀐 a b 의 값 : %d / %d", a, b);
}