#include <stdio.h>
#include <string.h>

int main()
{
    char ss[] = "abc";
    char tt[] = "ABC";
    int r;

    r = strcmp(ss,tt);

    printf("두 문장을 비교한 strcmp 값 : %d",r);
    // 1 이 나옴.  컴파일러에 따라 크기 비교를 통해 1 , 0 , -1 로 나오기도한다.
}