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
    //새로운 배열 사이즈에 맞춰어서 할당.
    char str2[size + 1];

    int i = 0;
    // size-1 값 : 앞에서 구한 사이즈를 활용.(size-1 이 문자열 마지막 인덱스).
    for (size - 1; size > -1; size--)
    {
        //뒤에서부터 값을 가져와서 배열의앞에 입력.
        str2[i] = *(c + size - 1);
        i++;
    }
    //널문자 입력.
    str2[size] = '\0';
    printf(str2);
}
void main()
{
    char str[1001];
    printf("문자열 입력(1000개하의 문자열) : ");
    scanf("%s", str);
    printf("\n뒤집어진 문자열 : ");
    input(str);
}