#include<stdio.h>

int FindRotations(int arr[],int n){
    int low=0;
    int high=n-1;

    while(low<=high){
        if(arr[low]<=arr[high]){
            return low;
        }
        int mid= (low+high)/2;
        int next=(mid+1)%n;
        int prev= (mid+n-1)%n;

        if(arr[mid]<=arr[prev]&&arr[mid]<=arr[next]){
            return mid;
        }
        else if(arr[mid]<=arr[high]){
            high=mid-1;
        }
        else if(arr[mid]>=arr[low]){
            low=mid+1;
        }
    }
    return -1;
}

int main(){

    int arr[]={11,12,13,2,3,4,5,6,8,9};
    int n=10;

    int count= FindRotations(arr,n);
    printf("The No of rotations are %d",count);

    return 0;
}