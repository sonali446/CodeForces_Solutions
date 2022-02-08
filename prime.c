#include<stdio.h>

int main(){

int n,m,temp,i,j;
scanf("%d",&n);
//m=n/2;

for(i=2;i<=n;i++){
    temp=0;
    for(j=2;j*j<=i;j++){ 

        if(i%j==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("%d ",i);
    }
}

    return 0;
    //n=sqrt(n)*sqrt(n)
}