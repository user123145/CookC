#include <stdio.h>

#define PI 3.1415926535
#define STR "원의 면적을 계산했습니다.\n"
#define END_MSG printf("프로그램이 종료되었습니다.\n\n")

void main()
{
    printf("반지름이 10 인 원의 면적은 ==> %10.5f\n", 10 * 10 * PI);

    printf(STR);

    END_MSG;
}