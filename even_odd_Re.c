#include<stdio.h>

int main(){

    long long int a,b;
    scanf("%lld %lld",&a,&b);
   long long int m,n;
    m=b-(a/2);
    n=b-((a/2)+1);

    if(a%2==0){

        if(b<=a/2){
            printf("%lld",(1+(b-1)*2));
        }
        else{
            printf("%lld",(2+(m-1)*2));
        }

    }
    else{
    
        if(b <= a/2+1){
        
            printf("%lld",(1+(b-1)*2));
           
        }
        else{
            
            printf("%lld",(2+(n-1)*2));
              
        }

    }

//999999999997 499999999999
//999999999997

    return 0;
}