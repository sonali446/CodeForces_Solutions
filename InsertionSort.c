#include<stdio.h>

int main(){

int arr[]={7,2,4,1,5,3};
int size=6;

InsertionSort(arr,size);

return 0;

}


void InsertionSort(int arr[],int size){


for(int i=1;i<size;i++){
     
     int  value=arr[i];
     int hole=i;

     while(hole>0 && arr[hole-1]>value){
         arr[hole]=arr[hole-1];
         hole--;
     }

     arr[hole]=value;
}

for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}

}