#include <stdio.h>
void main(int a, char *b[])
{
    int i;

    printf("a 매개변수 ==> %d\n", a);

    for (i = 0; i < a; i++)
    {
        printf("b[%d] 매개변수 ==> %s\n", i, b[i]);
    }
}