#include <stdio.h>
int main()
{
    int hap = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        hap += i;
    }
    printf("%d", hap);
}