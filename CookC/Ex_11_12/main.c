#include <stdio.h>

void main()
{
    FILE *wfp;
    int sum = 0;
    int in;

    wfp = fopen("result.txt", "wt");

    for (int i = 0; i < 5; i++)
    {
        printf("숫자 %d : ", i + 1);
        scanf("%d", &in);
        sum += in;
    }

    fprintf(wfp, "합계 ==> %d\n", sum);

    fclose(wfp);
}