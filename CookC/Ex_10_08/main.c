#include <stdio.h>
void func1(int a)
{
    // a 는 main() 의 a 와 다르다.
    // func1 의 a 는  지역변수로 새로 선언된 a(받은 값을 int a 로 다시 선언).
    a = a + 1;
    printf("전달받은 a ==> %d\n", a);
}
void main()
{
    int a = 10;

    func1(a);
    printf("func1() 실행 후의 a ==> %d\n", a);
}