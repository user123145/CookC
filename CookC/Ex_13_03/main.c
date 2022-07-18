#include <stdio.h>
void main()
{
    struct student
    {
        char name[10];
        int kor;
        int eng;
        float avg;
    } s = {.name = "scott", 4, 10, .eng = 23, .eng = 40};

    /* printf("이름 : ");
    scanf("%s", s.name);

    printf("국어 점수 : ");
    scanf("%d", &s.kor);

    printf("영어 점수 : ");
    scanf("%d", &s.eng);

    s.avg = (s.kor + s.eng) / 2.0f;*/

    printf("\n[구조체활용]\n");
    printf("학생이름 ==> %s\n", s.name);
    printf("국어 점수 ==> %d\n", s.kor);
    printf("영어 점수 ==> %d\n", s.eng);
    printf("평균 점수 ==> %2.1f\n", s.avg);
}