#include <stdio.h>
int main()
{
    int aa[100], bb[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        aa[i] = i * 2;
    }

    for (i = 0; i < 100; i++)
    {
        bb[i] = aa[99 - i];
    }

    printf("bb[0]은 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
}