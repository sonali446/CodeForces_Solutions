#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

int count=0;

while(n!=0){
    if(n>=100){
        int A=n/100;
        n=n%100;
        count=count+A;
    }
     if(n>=20){
        int B=n/20;
        n=n%20;
        count=count+B;
    }
     if(n>=10){
        int C=n/10;
        n=n%10;
        count=count+C;
    }
     if(n>=5){
        int D=n/5;
        n=n%5;
        count=count+D;
    }
     if(n>=1){
        int E=n/1;
        n=n%1;
        count=count+E;
    }
}
printf("%d",count);


return 0;
}