#include <stdio.h>
int main()
{
    char ss[8] = "Basic-C";
    int i;

    ss[5] = '#';

    for(i = 0; i<8; i++){
        printf("ss[%d] ==> %c \n", i, ss[i]);
    }

    printf("문자열 배열 ss ==> %s \n", ss);
}