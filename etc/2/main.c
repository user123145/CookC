//문자열 뒤집기
#include <stdio.h>
#include <string.h>
//문자열 포인터를 넘겨주면 뒤집어서 배열에 재입력
void input(char *c)
{
    int size = 0; //배열의 사이즈
    while (1)
    {
        char cc = *(c + size);
        if (cc != '\0')
        {
            size++;
        }
        else
        {
            break;
        }
    }
    char s1[size + 1];
    strcpy(*c, s1);
    for (int i = 0; i < size - 1; i++)
    {
        *(c + i) = s1[size - 2 - i];
    }
    *(c + size - 1) = '\0';
}
void main()
{
    char str[1000];
    printf("문자열 입력(1000개미만) : ");
    scanf("%s", str);
    printf("\n뒤집어진 문자열 : ");
    input(str);
    printf(str);
}