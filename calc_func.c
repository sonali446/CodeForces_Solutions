#include<stdio.h>

int main(){
 
 long long int n;
 scanf("%lld",&n);
 long long int  odd=0,even=0;
 long long int div=n/2;
 long long int div2=(n/2)+1;

 if(n%2==0){
     even=div*(div+1);
     odd=-(div*div);
 }
 else{
     even = div*(div+1);
     odd=-(div2*div2);
 }

 printf("%lld",even+odd);

    return 0;
}