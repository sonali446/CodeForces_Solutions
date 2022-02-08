#include<stdio.h>

int main(){


int n;
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int min=arr[0];
int max=arr[0];
int count=0;


for(int i=1;i<n;i++){

    if(arr[i]<min){
        min=arr[i];
        count++;
    }

        if(arr[i]>max){
        max=arr[i];
        count++;
    }

}

printf("%d",count);

    return 0;
}