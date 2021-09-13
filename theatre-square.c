#include<stdio.h>

int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    long long len=0,bre=0;

    len=a/c;
    if(a%c!=0){
        len++;
    }
    bre=b/c;
    if(b%c!=0){
        bre++;
    }
printf("%lld",len*bre);




}