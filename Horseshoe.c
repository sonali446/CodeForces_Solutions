#include<stdio.h>
int main(){

    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<4;i++){
        if(arr[i]!=-1){ 
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){
                arr[i]=-1;
            }
        }
        }
    }

    int count=0;
    for(int i=0;i<4;i++){
       // printf("%d",arr[i]);
        if(arr[i]!=-1){
            count++;
        }
    }
    printf("%d",(4-count));

    return 0;

}