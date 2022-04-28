#include <stdio.h>
//코드업 1163
int main()
{
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int x = y + m + d;
    x = (x / 100) % 10; //특정 자리수 구하기(백의자리),몫을 구하면 구하고자 하는 숫자가 1의자리에 온다, 그후 10으로 나머지 연산해서 숫자 알아낸다.
    if (x % 2 == 0)
    {
        printf("대박");
    }
    else
    {
        printf("그럭저럭");
    }
    return 0;
}