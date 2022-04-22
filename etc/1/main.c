#include <stdio.h>
// for 으로 함수 방정식의 그래프 알아보기
int main()
{
    // y = x 일때.
    for (int y = -20; y < 20; y++)
    {
        for (int x = -20; x < 20; x++)
        {
            if (y == 0)
            {
                printf(".");
            }
            else if (x == 0)
            {
                printf(".");
            }
            else
            {
                if (y == -x)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    // y = x^2
    for (int y = -20; y < 20; y++)
    {
        for (int x = -20; x < 20; x++)
        {
            if (y == 0)
            {
                printf(".");
            }
            else if (x == 0)
            {
                printf(".");
            }
            else
            {
                if (y == (-x * x))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");
//y = x^2-5
    for (int y = -30; y < 30; y++)
    {
        for (int x = -30; x < 30; x++)
        {
            if (y == 0)
            {
                printf(".");
            }
            else if (x == 0)
            {
                printf(".");
            }
            else
            {
                if (y == (-x*x+5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}