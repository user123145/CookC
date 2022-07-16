#include <stdio.h>

void main()
{
    FILE *rfp;
    int sum = 0;
    int in;

    rfp = fopen("data.txt", "r");

    for (int i = 0; i < 5; i++)
    {
        fscanf(rfp, "%d", &in);
        sum += in;
    }

    printf("합계 ==> %d\n", sum);

    fclose(rfp);
}