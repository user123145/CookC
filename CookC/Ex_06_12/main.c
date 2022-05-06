#include <stdio.h>
void main()
{

    int i;
    int dan;
    while (1)
    {
        printf("몇 단 : ");
        scanf("%d", &dan);

        for (i = 1; i < 10; i++)
        {
            printf("%d x %d = %d\n", dan, i, dan * i);
        }
    }
}