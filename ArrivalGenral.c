#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int arr[n];
int small=101,large=0,index=0,index2=0;

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

    if(arr[i]>large){
        large=arr[i];
        index=i;
    }
    
    if(arr[i]<small){
        small=arr[i];
        index2=i;
    }
}

//printf("%d%d",large,small);
if(arr[0]==large&&arr[n-1]==small){
    printf("0");
}
else{ 
int temp=0,temp2=0,swap=0;
    for(int i=index;i>0;i--){
        if(arr[i]>arr[i-1]){
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            swap++;
        }
    }
   //
   for(int i=0;i<n;i++){
       if(arr[i]==small){
        index2=i;
    }
   }
   for(int i=index2;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            temp2=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp2;
            swap++;
        }
    }
     printf("%d",swap);
}


    return 0;
}