#include<stdio.h>


int main(){
    
    int n;
    scanf("%d",&n);

    int arr[n];
    int count=0,pos=0,res=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){

        if(arr[i]<0){
            if(pos==0){
               res+=1;
            }
           else{
               pos--;
           }
        }
        else{
           pos=pos+arr[i];
        }
    }
printf("%d",res);


    return 0;
}