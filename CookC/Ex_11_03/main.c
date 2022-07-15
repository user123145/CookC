#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    ch = _getch();
    printf("입력받은 문자 : %c\n", ch);
    putch(ch);
    printf("\n");

    ch = _getch();
    printf("입력받은 문자 : %c\n", ch);
    putch(ch);
    printf("\n");

    ch = _getch();
    printf("입력받은 문자 : %c\n", ch);
    putch(ch);
    printf("\n");
}
