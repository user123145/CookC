#include <stdio.h>

void main()
{
    //경로를 입력받아서 복사하기 추가
    char path_1[100];
    char path_2[100];

    printf("읽을 파일 경로 입력 : ");
    scanf("%s", path_1);

    printf("출력할 파일 경로 입력 : ");
    scanf("%s", path_2);

    char str[201];
    FILE *rfp;
    FILE *wfp;

    //드라이브명 (c 가 기본으로 인식됨)
    rfp = fopen(path_1, "r");
    wfp = fopen(path_2, "wt");

    int index = 1;

    for (;;)
    {
        if (feof(rfp))
        {
            break;
        }

        fgets(str, 200, rfp);

        fputs(str, wfp);

        printf("읽은 행 %d : %s", index, str);
        index++;
    }

    fclose(rfp);
    fclose(wfp);
}