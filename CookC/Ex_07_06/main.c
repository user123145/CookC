#include <stdio.h>
int main()
{
    int menu;

    do
    {
        printf("\n손님 주문 하시겠습니까? \n");
        printf("<1>카페라때 <2>카푸치노 <3>아메리카노 <4>그만 시킬래요 ==> ");
        scanf("%d", &menu);

        switch(menu)
        {
        case 1:
            printf("#까페라때 주문하셨습니다. \n");
            break;
        case 2:
            printf("#카푸치노 주문하셨습니다. \n");
            break;
        case 3:
            printf("#아메리카노 주문하셨습니다. \n");
            break;
        case 4:
            printf("주문하신 커피 준비하겠습니다. \n");
            break;
        default:
            printf("잘못 주문하셨습니다.\n");
        }

    } while (menu > 0 && menu < 4);
}