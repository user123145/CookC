#include <stdio.h>
int main()
{
    char str[100];
    char ch;

    int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;

    printf("문자열을 입력하세요(100자 이내. 영어, 숫자) : ");
    scanf("%s", str);

    int i = 0;

    while (1)
    {
        if (str[i] == '\0') // str[i] 가 널문자(배열의끝)이면 종료.
        {
            break;
        }

        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            upper_cnt++; //대문자 개수 카운트
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            lower_cnt++; //소문자 개수 카운트
        }
        else if (ch >= '0' && ch <= '9')
        {
            digit_cnt++; //숫자 개수 카운트
        }
        i++;
    }
    printf("대문자 %d 개, 소문자 %d 개, 숫자 %d 개 입니다.\n", upper_cnt, lower_cnt, digit_cnt);
}