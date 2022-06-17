#include <stdio.h>
int calc(int v1, int v2, int op)
{
    int result;

    switch (op)
    {
    case 1:
        result = v1 + v2;
        break;
    case 2:
        result = v1 - v2;
        break;
    case 3:
        result = v1 * +v2;
        break;
    case 4:
        result = v1 / v2;
        break;
    }
    return result;
}
void main()
{
    int res;
    //넘겨주는 값과 함수의 인수는 다른 변수명을 권장.
    int oper, a, b;

    printf("계산 입력 (1 : + , 2 : - , 3 : * , 4 : / )");
    scanf("%d", &oper);

    printf("계산할 두 숫자 입력 : ");
    scanf("%d %d", &a, &b);

    res = calc(a, b, oper);

    printf("계산 결과는 : %d", res);
}