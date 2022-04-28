#include <stdio.h>
int main()
{
    int b, c, s;
    float h;
    scanf("%f %d %d %d", &h, &b, &c, &s);
    
    float x = h*b*c*s/8/1024/1024;

    printf("%1.1f MB",x);
    return 0;
}