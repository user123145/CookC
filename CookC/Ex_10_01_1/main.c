#include <stdio.h>
int makeCoffee(int select)
{
    printf("\n#1. 뜨거운 물을 준비한다\n");
    printf("#2. 종이컵을 준비한다\n");

    switch (select)
    {
    case 1:
        printf("#3. 보통커피를 탄다\n");
        break;
    case 2:
        printf("#3. 설탕커피를 탄다\n");
        break;
    case 3:
        printf("#3. 블랙커피를 탄다\n");
        break;
    default:
        printf("#3. 아무거나 탄다\n");
        break;
    }

    printf("#4. 물을 붓는다\n");
    printf("#5. 스푼으로 저어서 녹인다\n\n");
}
void main()
{
    char nickname[21];

    int coffee;
    while (1)
    {
        printf("닉네임을 입력하세요");
        scanf("%s", nickname);
        printf("어떤 커피를 드릴까요?  (1:보통, 2:설탕, 3:블랙)");
        scanf("%d", &coffee);
        makeCoffee(coffee);
        printf("%s님~ 커피 여기 있습니다\n\n", nickname);
    }
}