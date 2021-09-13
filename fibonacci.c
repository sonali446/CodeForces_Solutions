#include<stdio.h>

int main(){


long long int n,a,b,c;
scanf("%llu",&n);
a=0;
b=1;
printf("0 1");
for(int i=0;i<n;i++){
    
    c=a+b;
    printf(" %llu",c);
    a=b;
    b=c;
    
}


    return 0;
}