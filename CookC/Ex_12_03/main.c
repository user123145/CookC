#include <stdio.h>
#include <malloc.h>
void main()
{
    int *p;
    int sum = 0;
    int cnt;

    printf("입력할 개수 입력 : ");
    scanf("%d", &cnt);

    p = (int *)malloc(cnt * sizeof(int));

    for (int i = 0; i < cnt; i++)
    {
        printf("%d 번째 숫자 : ", i + 1);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < cnt; i++)
    {
        sum += p[i];
    }

    printf("입력된 숫자의 합 : %d\n", sum);

    free(p);
    int abc[6] = {1, 2, 3, 4, 5, 6};
    p = abc;
    printf("%d", p[1]);
}