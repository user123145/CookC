#include <stdio.h>
#define LF printf("\n")

void foo();

int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        foo();
        LF;
    }
}