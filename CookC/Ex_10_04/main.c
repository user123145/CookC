#include <stdio.h>
int plus(int v1, int v2)
{
    int result;
    result = v1 + v2;
    return result;
}
void main()
{
    int hap;
    hap = plus(100, 200);

    printf("100 과 200 의 plus() 함수 사용 결과 : %d", hap);
}
