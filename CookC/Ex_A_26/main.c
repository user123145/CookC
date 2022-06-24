//포인터를 이용한 배열의 선택정렬 예제
#include <stdio.h>
void main()
{
    //무작위 배열
    int num[] = {8, 3, 6, 2, 7, 5, 1, 4, 0, 9};
    int tmp;
    int i, k;

    int *p;

    p = num;

    printf("정렬 전 배열 ==> ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    for (i = 0; i < 9; i++)
    {
        for (k = i + 1; k < 10; k++)
        {
            if (*(p + i) > *(p + k))
            {
                tmp = *(p + i);
                *(p + i) = *(p + k);
                *(p + k) = tmp;
            }
        }
    }
    printf("정렬 후 배열 ==> ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}