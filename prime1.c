#include<stdio.h>

int main(){

int n,flag=0,i=0;

scanf("%d",&n);

if(n==1){
    flag=1;
    
}

for( i=2;i*i<n;i++){
    if(n%i==0){
        flag=2;
       
        break;
    }
}

if(flag==0){
    printf("it is a prime");
}
else if(flag==1||flag==2){
     printf("it is not a prime");
}

    return 0;
}