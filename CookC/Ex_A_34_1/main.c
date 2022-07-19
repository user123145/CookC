#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x;
    printf("\n입력할 학생 수 : ");
    scanf("%d", &x);

    typedef struct
    {
        char name[10];
        int age;
    } student;

    student *sp;
    sp = malloc((sizeof(student)) * x);
    for (int i = 0; i < x; i++)
    {
        printf("이름과 나이 입력 : ");
        scanf("%s %d", (sp + i)->name, &sp[i].age);
    }

    printf("\n===================\n\n");
    for (int i = 0; i < x; i++)
    {
        printf("이름 : %s , 나이 : %d\n", sp[i].name, sp[i].age);
    }
    printf("\n");

    free(sp);
}