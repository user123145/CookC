#include <stdio.h>
void func1(int *a)
{
    *a += 1;
    printf("포인터로 전달받은 후  a 에 +1 ==> %d\n", *a);
}
void main()
{
    int a = 10;
    func1(&a);
    printf("func1() 실행전 a ==> 10\nfunc1() 실행후 a ==> %d", a);
}