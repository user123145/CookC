#include <stdio.h>
int main()
{
    int arr[11][11];
    int x;
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d",&x);
            arr[i][j] = x;
        }
    }
    int i = 1, j = 1;
    while(1){
        if(arr[i][j]==2){
            arr[i][j]=2;
            break;
        }
        arr[i][j]=9;
        j++;
        if(arr[i][j]==1{
            j--;
            i++;
        }
        if(i>8||j>8){
            
            break;
        }
        
    }

}