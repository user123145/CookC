#include <stdio.h>
#include <string.h>
void foo(char *in);
void main()
{
    //파일을 읽어서 파일에 거꾸로 출력

    //파일 경로 입력
    char path_1[100];
    char path_2[100];

    printf("파일을 읽어올 경로 입력 : ");
    scanf("%s", path_1);

    printf("파일을 출력할 경로 입력 : ");
    scanf("%s", path_2);

    FILE *rfp;
    FILE *wfp;

    char temp[201];

    rfp = fopen(path_1, "r");
    wfp = fopen(path_2, "wt");

    while (1)
    {
        /* if (feof(rfp))
        {
            break;
        } */

        fgets(temp, 201, rfp);

        //문자열 끝 처리. 실행위치를 변경
        if (feof(rfp))
        {
            break;
        }

        printf("%s", temp);

        //문자열을 뒤집기 처리
        foo(temp);
        fputs(temp, wfp);

        /* //파일 끝의 처리를 위해서 한 행이 끝날때마다 문자열을 비워줌.
        strcpy(temp, ""); */
    }

    fclose(rfp);
    fclose(wfp);
}
void foo(char *in)
{
    if (*(in) != '\0')
    {
        int k = 0;
        char temp[201];
        while (1)
        {
            if (*(in + k) == '\0')
            {
                break;
            }
            else
            {
                temp[k] = *(in + k);
                k++;
            }
        }

        //문자열을 읽을때 자동 개행처리가되는것을 처리
        *(in + k - 1) = '\n';
        *(in + k) = '\0';

        for (int i = 0; i < k - 1; i++)
        {
            *(in + k - i - 2) = temp[i];
        }
    }
}