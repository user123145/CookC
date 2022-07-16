#include <stdio.h>

void main()
{
    char str[200];
    FILE *rfp;

    rfp = fopen("c:\\windows\\win.ini", "r");

    unsigned int index = 1;
    for (;;)
    {
        fgets(str, 200, rfp);

        if (feof(rfp))
        {
            break;
        }

        printf("%d 행 : %s", index, str);
        index++;
    }

    fclose(rfp);
}