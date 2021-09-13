#include<stdio.h>

int BinarySearch(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int mid=0;
    while(start<=end){
        mid=(start+end)/2;

        if(x==arr[mid]){
            return mid;
        }
        else if(x<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}



int main(){

int arr[]={2,3,4,5,6,7,8,9};
int x;
scanf("%d",&x);
int index=BinarySearch(arr,8,x);

if(index!=-1){
    printf("NUMBER %d FOUND AT INDEX %d",x,index);
}
else{
    printf("NUMBER NOT FOUND");
}



    return 0;
}