#include <stdio.h>

extern int a;

void func()
{
    printf("extern int a 의 값 : %d\n", a);
}