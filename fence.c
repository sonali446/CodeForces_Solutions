#include<stdio.h>

/*void check_width(int arr[],int size,int height){
    int count=size;
    for(int i=0;i<size;i++){
        if(arr[i]>height){
            count++;
        }
    }
printf("%d",count);
}*/


int main(){

    int size,height;
   

    scanf("%d %d",&size,&height);
     int count=size;

    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>height){
            count++;
        }
    }
printf("%d",count);
    //check_width(arr,size,height);



    return 0;
}