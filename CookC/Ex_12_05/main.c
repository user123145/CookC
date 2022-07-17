#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p;
    int sum = 0;
    int cnt = 0;
    int temp;

    p = (int *)malloc(sizeof(int) * 1);

    printf("0 이 입력되기전까지의 합을 구함\n1 번째 숫자 : ");
    scanf("%d", &p[0]);
    cnt++;

    for (int i = 2;; i++)
    {
        printf("%d 번째 숫자 : ", i);
        scanf("%d", &temp);

        // 0이 나오기전까지 계속 메모리 확장시킴
        if (temp != 0)
        {
            p = (int *)realloc(p, sizeof(int) * i);
        }
        else
        {
            break;
        }
        p[i - 1] = temp;
        cnt++;
    }

    for (int i = 0; i < cnt; i++)
    {
        sum += p[i];
    }

    printf("입력한 숫자의 합 ==> %d\n", sum);

    free(p);
}