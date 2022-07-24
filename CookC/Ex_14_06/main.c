#include <stdio.h>
#define lf printf("\n")

void foo(int in);
void func1();
void func2();

int main()
{
    int in = 4;
    foo(in);
    return 0;
}

void foo(int in)
{
    for (int i = 0; i < in; i++)
    {
        func1();
        lf;
        func2();
        lf;
    }
}

void func1()
{
    static int a = 0;
    printf("static int a = 0 으로 초기화후 +1  :  %d\n", a);
    a++;
}

void func2()
{
    static int a;
    a = 0;
    printf("static int a 로 선언후 0으로 초기화 +1  :  %d\n", a);
    a++;
}