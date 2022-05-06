#include <stdio.h>
void main()
{
    int hap = 0;
    int i;
    int num;

    printf("값 입력 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        hap +=i;
    }
    printf("1 에서 %d 까지의 값 : %d\n",num,hap);
}