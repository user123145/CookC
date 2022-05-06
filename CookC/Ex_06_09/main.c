#include <stdio.h>
int main()
{
    int hap = 0;
    int i;

    for (i = 501; i <= 1000; i+=2){
        hap +=i;
    }
    printf("%d",hap);
}