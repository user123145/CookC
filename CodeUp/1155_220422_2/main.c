#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x % 7 == 0)
    {
        printf("multiple");
    }
    else
    {
        printf("not multiple");
    }

    return 0;
}