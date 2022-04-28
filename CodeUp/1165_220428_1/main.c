#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c;

    c = (90 - a) / 5 + b + 1;
    if (a%5==0){
        c = (90-a)/5 +b;
    }
    if (a >= 85)
    {
        c = b + 1;
    }

    printf("%d", c);
    return 0;
}
