#include <stdio.h>
#include <string.h>
int main()
{
    char ss[10] = "ABC";
    char ss2[4] = "DEF";

    strcat(ss,ss2);
    printf("%s\n",ss);

    char s1[5] = "ABC";
    char s2[3] = "DE";
    
    strcat(s1,s2);
    printf("%s",s1);//s1 배열의 크기가 모자라기때문에 글자 하나가 잘림.

}