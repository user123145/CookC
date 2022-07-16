#include <stdio.h>

void main()
{
    char s[20];
    FILE *wfp;

    //파일이 없으면 새로만드는 t 옵션 (touch?)
    wfp = fopen("result.txt", "wt");

    printf("문자열을 입력하세요(19자까지) : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}