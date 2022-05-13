#include <stdio.h>
int main()
{
    int hap = 0;
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        hap += i;
    }
    printf("1~100까지의 합 중 3의 배수를 제외한 값 : %d", hap);
}