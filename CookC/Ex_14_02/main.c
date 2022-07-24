#include <stdio.h>
void main(int argc, char *argv[])
{
    char str[200];
    FILE *rfp;

    if (argc != 2)
    {
        printf("\n매개변수를 1개 사용하세요\n");
        return;
    }

    rfp = fopen(argv[1], "r");

    for (;;)
    {
        fgets(str, 199, rfp);

        if (feof(rfp))
        {
            break;
        }

        printf("%s", str);
    }

    fclose(rfp);
}