#include <stdio.h>
 int main()
 {
     int y,m;
     printf("������ �Է��ϼ��� : ");
     scanf("%d",&y);
     printf("���� �Է��ϼ��� : ");
     scanf("%d",&m);
    
    
     if(m==2){
         if(((y%4==0)&&(y%100!=0))||(y%400==0)){
             printf("%d�� %d���� ������ 29�� �Դϴ�.\n",y,m);
        }else{
             printf("%d�� %d���� ������ 28�� �Դϴ�.\n",y,m);
        }
     }else{
        if((m==4)||(m==6)||(m==9)||(m==11)){
             printf("%d�� %d���� ������ 30�� �Դϴ�.\n",y,m);
        }else{
             printf("%d�� %d���� ������ 31�� �Դϴ�.\n",y,m);
        }
    }
    return 0;
 }