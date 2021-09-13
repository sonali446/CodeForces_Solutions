#include<stdio.h>

int main(){

int  n;

scanf("%d",&n);
int arr[n];
int  total=0,temp=0,sum=0,count=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    total=total+arr[i];
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){

        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

for(int i=0;i<n;i++){
    sum=sum+arr[i];
    count++;

    if(sum>total/2){
        printf("%d",count);
        break;
    }

}

}