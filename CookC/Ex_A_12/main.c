#include <stdio.h>
int main()
{
    int x,y;
    char c;

    printf("첫 번째 수를 입력하세요 : ");
    scanf("%d", &x);
    printf("계산할 연산자를 입력하세요 : ");
    scanf(" %c", &c);
    printf("두 번째 수를 입력하세요 : ");
    scanf("%d", &y);

    switch(c){
        case '+' :
            printf("%d %c %d = %d",x,c,y,x+y);
            break;
        case '-' :
            printf("%d %c %d = %d",x,c,y,x-y);
            break;
        case '*' :
            printf("%d %c %d = %d",x,c,y,x*y);
            break;
        case '/' :
            printf("%d %c %d = %d",x,c,y,x/y);
            break; 
        case '%' :
            printf("%d %c %d = %d",x,c,y,x%y);
            break;
        default :
            printf("연산자를 잘못 입력");
    }

}