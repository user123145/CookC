#include <stdio.h>
#include <string.h>
int main()
{
    char ss[100] = "가나다라";//문자열 선언과 동시에 초기화는 가능.
    
    
    //ss = "가나다라";   ==>   이미 선언된 상태에서는 문자열 입력으로 초기화가 불가능.

    strcpy(ss,"flkdjflsj");
    printf("%s",ss);
}