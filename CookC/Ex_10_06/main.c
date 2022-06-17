#include <stdio.h>
int a = 100;

void func1()
{
    int a = 200;
    printf("지역변수 a 의 값 : %d\n", a);
}
void main()
{
    func1();
    printf("main() 에서 a 의 값 : %d\n", a);
}