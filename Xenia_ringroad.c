#include<stdio.h>


int main(){

long long n,m;
scanf("%I64d %I64d",&n,&m);


int arr[m];

for(int i=0;i<m;i++){
    scanf("%I64d",&arr[i]);
}

long long count=arr[0]-1;
//printf("%d",count);
for(int i=1;i<m;i++){

    if(arr[i]<arr[i-1]){
        count=count+(n-arr[i-1])+(arr[i]-0);
        //printf("\n%d",count);
    }
    else if(arr[i]==arr[i-1]){
        continue;
    }
    else{
        count=count+(arr[i]-arr[i-1]);
       // printf("\n%d",count);
    }
}
//4996767587

printf("%I64d",count);

    return 0;
}