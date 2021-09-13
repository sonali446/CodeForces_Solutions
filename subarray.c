#include<stdio.h>

int main(){

    int n, count=0;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

         
            for(int k=i;k<=j;k++){
               
                printf("%d ",arr[k]);
                
            }
            count=0;
          
            printf("\n");
        }
    }


    return 0;
}