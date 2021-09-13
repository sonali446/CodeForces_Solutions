#include<stdio.h>

int main(){

    int n,count,total=0;

    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
//2 2 1 3 4 1
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i;j<n-1;j++){
            if(arr[j]<=arr[j+1]){
               count++;
            
            }
            else{
                break;
            }
        }
        if(count>total){
            total=count;   
        }
       
    }
printf("%d",total);
    return 0;
}