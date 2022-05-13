#include <stdio.h>
int main()
{
    int a = 0,sum;
    do{
        sum+=a;
        a++;
    }while(a<=200);
    printf("결과 : %d",sum);
}