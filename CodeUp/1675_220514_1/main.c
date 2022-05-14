#include <stdio.h>
int main()
{
    char str[201];
    scanf("%[^\n]s",str);//서식지정 : [^\n] -> 공백을 포함하여 \n가 나올때까지 입력받음.
    int i = 0;
    
    do{
        if(str[i]==' '){
        }
        else if(str[i]>'c'){
            /*int x = (int)str[i]-3;
            str[i] = (char)x;
            필요없는 과정*/
            
            str[i]-=3;
        }else{
            
            str[i]+=23;
        }
        i++;
    }
    while(str[i]!='\0');
    printf("%s\n",str);
}