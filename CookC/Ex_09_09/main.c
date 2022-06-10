#include <stdio.h>

void main()
{
    char s[8] = "Basic-C";
    char *p;
    int i;

    p = s;

    for (i = sizeof(s) - 2; i >= 0; i--)
    {
        printf("%c", *(p + i));
    }
    printf("\n");
}