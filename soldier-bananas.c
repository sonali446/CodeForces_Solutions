#include<stdio.h>

int main(){

    long long k=0,w=0;
    long long  n=0;
    long long sum=0;

    scanf ("%lld %lld %lld",&k,&n,& w);

    for(int i=1;i<=w;i++){
        
        sum=sum+(k*i);
    }
if(sum>n){ 
    long long total= sum-n;

    printf("%lld",total);
}
else{
    printf("0");
}

    return 0;
}