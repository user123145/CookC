#include <stdio.h>
void main()
{
    int aa[3];
    int *p;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("%d 번째 숫자 : ", i + 1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for (int i = 0; i < 3; i++)
    {
        sum += *(p + i);
    }

    printf("입력 숫자의 합 ==> %d\n", sum);
}