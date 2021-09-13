#include<stdio.h>
#include<stdbool.h>

int main(){

int n;
scanf("%d",&n);
int prime[n+1];
for(int i=0;i<n+1;i++){
    prime[i]=1;
}
prime[0]=0;
prime[1]=0;
for(int i=2;i*i<=n;i++){

    if(prime[i]==1){
        for(int j=2;i*j<=n;j++){
            prime[i*j]=0;
        }
    }
}

for(int i=0;i<n+1;i++){
    if(prime[i]==1){
        printf("%d ",i);
    }
}


    return 0;
}