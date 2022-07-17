#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("입력할 개수 입력 : ");
    scanf("%d", &num);

    int *p;
    p = (int *)malloc(sizeof(int) * num);

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        printf("%d 번째 숫자 : ", i + 1);
        scanf("%d", p + i);
    }

    for (int i = 0; i < num; i++)
    {
        if (p[i] % 2 == 0)
        {
            sum += p[i];
        }
    }
    printf("입력한 수 중 짝수의 합 : %d\n", sum);

    free(p);
}