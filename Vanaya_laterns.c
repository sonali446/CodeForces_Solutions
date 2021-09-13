#include<stdio.h>

int main(){

int n ;
scanf("%d",&n);

int l;
scanf("%d",&l);

int arr[n];

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int max=0;
int temp=0;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}


for(int i=0;i<n;i++){
    if(arr[i+1]-arr[i]>max){
        max=arr[i+1]-arr[i];
    }
}


double max2=(double)max/2;
double case1=arr[0];
double case2=l-arr[n-1];

if(case1>max2){
    max2=case1;
}
if(case2>max2){
max2=case2;
}

printf("%.10lf",max2);
    return 0;
}

