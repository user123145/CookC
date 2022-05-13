#include <stdio.h>
int main()
{
    int hap=0;
    int i;

    i = 0;
    while(i <= 10){
        hap = hap + i;
        i++;
    }

    printf("1 에서 10 까지의 합 : %d \n", hap);

    //for 문으로 작성
    hap = 0;
    for(int j = 0; j <= 10; j++){
        hap = hap + j;
    }

    printf("1 에서 10 까지의 합 : %d \n", hap);
}