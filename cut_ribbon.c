#include<stdio.h>

int main(){

int n,m;
scanf("%d",&n);
m=n;
int count=0,sum=0,odd=0;

int arr[3];
for(int i=0;i<3;i++){
    scanf("%d",&arr[i]);
}


int i=0;
while(m>0){ 
//for(int i=0;i<3;i++){
    if(arr[i]>=n){
       odd++;
        continue;
    }
    if((arr[i]<n )/*&& sum<n*/){
       // sum=sum+arr[i];
       m=m-arr[i];
        count++;
    }
//i++;
}

if(odd==3){
    printf("1");
}else{
printf("%d",count);
}

    return 0;
}

