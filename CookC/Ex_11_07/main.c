#include <stdio.h>

void main()
{
    char s[20];
    FILE *rfp;

    //상대경로 사용.
    rfp = fopen("..\\Ex_11_06\\1\\sample.txt", "r");

    fgets(s, 20, rfp);

    printf("파일에서 읽은 문자열 : ");
    puts(s);

    fclose(rfp);
}