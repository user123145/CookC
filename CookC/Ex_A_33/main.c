#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
    int num;
    printf("문자열 개수 입력 : ");
    scanf("%d", &num);

    char *p[num];

    for (int i = 0; i < num; i++)
    {
        char temp[201];
        printf("%d 번째 문자열 입력 : ", i + 1);
        scanf("%s", temp);
        int size = strlen(temp);
        p[i] = malloc(sizeof(char) * size + 1);

        for (int j = 0; j < size; j++)
        {
            *(p[i] + size - 1 - j) = temp[j];
        }
        *(p[i] + size) = '\0';
    }

    printf("\n입력과 반대로 출력(글자 순서도 반대로)\n");

    for (int i = num; i > 0; i--)
    {
        printf("%d 번째 문자열 : %s\n", i, p[i - 1]);
    }

    free(p);
}