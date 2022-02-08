#include<stdio.h>

int search(int arr[],int x,int totalMin){

int low=0;
int high=x;

while(low<=high){

    int mid= (low+high)/2;

    if(mid==x){
        if(arr[mid])
    }
    else if(mid>x){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}

return -1;

}


int main(){


int n,k;

scanf("%d %d",&n,&k);


int arr[10]={5,15,30,50,75,105,140,180,225,275};

int totalMin=240-k;
int x= n-1;

int minutes=search(arr,x,totalMin);

if(minutes<=totalMin){
    printf("%d",k);

}
  



    return 0;
}