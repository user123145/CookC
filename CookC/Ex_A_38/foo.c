#include <stdio.h>

void foo()
{
    static int dan = 1;

    for (int j = 1; j < 10; j++)
    {
        printf("%d 단 : %d x %d = %d\n", dan, dan, j, dan * j);
    }
    dan++;
}
