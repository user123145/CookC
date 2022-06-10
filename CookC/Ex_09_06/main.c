#include <stdio.h>
void main()
{
    char ch;
    char *p;

    ch = 'A';
    p = &ch;

    printf("ch가 가지고 있는 값 : ch ==> %c\n", ch);
    printf("ch가 가지고 있는 값 : ch ==> %d\n", &ch);
    printf("p가 가지고 있는 값 : p ==> %d\n", p);
    printf("*p가 가지고 있는 값 : *p ==> %c\n", *p);
    printf("&*p가 가지고 있는 값 : &*p ==> %d\n", &*p);
}