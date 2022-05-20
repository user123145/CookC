#include <stdio.h>
int main()
{
    int aa[4];
    int hap;

    printf("1번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[0]);
    printf("2번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[1]);
    printf("3번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[2]);
    printf("4번째 숫자를 입력하세요 : ");
    scanf("%d", &aa[3]);

    hap = aa[0] + aa[1] + aa[2] + aa[3];

    printf("%d\n", hap);
    printf("%d = & 없이 출력\n", aa); //출력하면 주소값이 나온다.
    printf("%d\n", &aa);              //똑같이 주소값이 나온다.
    printf("%d\n", &aa[0]);           //주소값나옴
    printf("%d\n", aa[0]);            //값이 나옴
}