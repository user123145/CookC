#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *rfp;
    FILE *wfp;

    char temp[201];

    rfp = fopen(argv[1], "r");
    wfp = fopen(argv[2], "wt");

    while (1)
    {
        fgets(temp, 201, rfp);
        if (feof(rfp))
        {
            break;
        }
        fputs(temp, wfp);
    }

    fclose(rfp);
    fclose(wfp);

    return 0;
}