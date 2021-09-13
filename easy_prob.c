#include<stdio.h>

int main(){

    int n,flag=0;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        if(arr[0]==1){
            printf("HARD");
            flag=2;
        }
        else{
            printf("EASY");
             flag=2;
        }
    }

    if(n==2){
        if(arr[0]==1 &&arr[1]==1){
             printf("HARD");
              flag=2;
        }
       else{
            printf("EASY");
             flag=2;
       }
    }
      if(n>2){   
        for(int i=0;i<n;i++){

            if(arr[i]==1){
                printf("HARD");
                flag=1;
                break;
            }
            
        }
      
      }
      if(flag==0){ 
    printf("EASY");    
      }

    

    return 0;
}