#include <stdio.h>

void useVar(char a, char b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
void usePointer(char *a, char *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    char x = 'A', y = 'Z';

    printf("원래값 : x = %c , y = %c \n", x, y);

    //인수로 전달만 할뿐 영향을 미치지는 못함.
    useVar(x, y);
    printf("변수를 이용한 값 swap : x = %c , y = %c \n", x, y);

    usePointer(&x, &y);
    printf("포인터를 이용한 값 swap : x = %c , y = %c \n", x, y);
}