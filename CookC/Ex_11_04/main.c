#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char password[5] = "5678";
    char input[5];
    printf("비밀번호 4 글자를 입력하세요 : ");
    for (int i = 0; i < 4; i++)
    {
        input[i] = _getch();
        //입력과 동시에 *표로 입력 표시.
        putchar('*');
    }

    if (strncmp(password, input, 4) == 0)
    {
        printf("\n비밀번호 통과!\n");
    }
    else
    {
        printf("\n입력한 비밀번호 : ");
        for (int i = 0; i < 4; i++)
        {
            putch(input[i]);
        }

        printf(" 가 틀림.");
    }
}