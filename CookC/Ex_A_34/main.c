#include <stdio.h>
#include <stdlib.h>
void main()
{
    typedef struct
    {
        char name[10];
        union
        {
            char phone[15];
            char social_id[15];
        } id;
    } person;

    person p1;

    printf("이름 --> ");
    scanf("%s", p1.name);
    printf("전화번호 또는 주민번호 --> ");
    scanf("%s", p1.id.phone);

    printf("\n=========\n");
    printf("이름 ==> %s\n", p1.name);
    printf("전화번호 or 주민번호 ==> %s\n", p1.id.phone);
}