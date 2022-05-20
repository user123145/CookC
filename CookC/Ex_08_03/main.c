#include <stdio.h>
int main()
{
    int aa[4];
    int hap = 0;
    int i;

    for (i = 0; i <= 3; i++)
    {
        printf("%d 번째 숫자를 입력해주세요 : ", i + 1);
        scanf("%d", &aa[i]);
    }

    hap = aa[0] + aa[1] + aa[2] + aa[3];

    printf("%d\n", hap);
    printf("%d\n", &hap);             //주소값 출력
    printf("%d = & 없이 출력\n", aa); //출력하면 주소값이 나온다.
    printf("%d\n", &aa);              //똑같이 주소값이 나온다.
    printf("%d\n", &aa[0]);           //주소값나옴
    printf("%d\n", aa[0]);            //값이 나옴
}