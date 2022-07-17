#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *p[3];
    char temp[100];
    int size;

    for (int i = 0; i < 3; i++)
    {
        printf("%d 번째 문자열 : ", i + 1);
        gets(temp);

        size = strlen(temp);
        p[i] = malloc((sizeof(char) * size) + 1);

        strcpy(p[i], temp);
    }

    printf("\n-입력과 반대로 출력(포인터사용)-\n");
    for (int i = 2; i >= 0; i--)
    {
        printf("%d : %s\n", i + 1, p[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        free(p[i]);
    }
}