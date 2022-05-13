#include <stdio.h>
int main()
{
    int a, b;
    char ch;

    while (1)
    {
        printf("계산할 두 수를 입력 : ");
        scanf("%d %d,", &a, &b);

        printf("계산할 연산자를 입력하세요 : ");
        scanf(" %c", &ch);

        switch (ch)
        {
        case '+':
            printf("%d + %d = %d 입니다.\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d 입니다.\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d 입니다.\n", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d 입니다.\n", a, b, a / b);
            break;
        case '%':
            printf("%d % %d = %d 입니다.\n", a, b, a % b);
            break;
        default:
            printf("잘못된 연산자 입력\n");
        }
    }
}