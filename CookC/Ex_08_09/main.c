#include <stdio.h>
#include <string.h>
int main()
{
    char ss[10];
    scanf("%s",&ss);
    int len;
    int size;

    //문자열의 길이는 널문자를 만날때 까지의 길이

    len = strlen(ss);
    size = sizeof(ss) / sizeof(char);

    printf("문자열의 길이 : %d\n배열의 크기 : %d", len, size);
}