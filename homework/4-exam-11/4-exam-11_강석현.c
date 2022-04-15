#include <stdio.h>
 int main()
 {
     int y,m;
     printf("연도를 입력하세요 : ");
     scanf("%d",&y);
     printf("달을 입력하세요 : ");
     scanf("%d",&m);
    
    
     if(m==2){
         if(((y%4==0)&&(y%100!=0))||(y%400==0)){
             printf("%d년 %d월의 말일은 29일 입니다.\n",y,m);
        }else{
             printf("%d년 %d월의 말일은 28일 입니다.\n",y,m);
        }
     }else{
        if((m==4)||(m==6)||(m==9)||(m==11)){
             printf("%d년 %d월의 말일은 30일 입니다.\n",y,m);
        }else{
             printf("%d년 %d월의 말일은 31일 입니다.\n",y,m);
        }
    }
    return 0;
 }