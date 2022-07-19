#include <stdio.h>
void main()
{
    typedef union
    {
        int tot;
        char grade;
    } student;

    student u;

    u.tot = 300;
    u.grade = 'A';

    printf("\n공용체활용\n");
    printf("총점 ==> %d\n", u.tot);
    printf("등급 ==> %c\n", u.grade);
}