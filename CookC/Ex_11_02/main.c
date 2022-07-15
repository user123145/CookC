#include <stdio.h>
void main()
{
    char s[20];

    printf("문자열을 입력(배열 크기 -1만큼) : ");
    gets(s);

    printf("입력된 문자열 : ");
    puts(s);
}