#include<stdio.h>

int main(){

long int a,b;
scanf("%ld",&a);

if(a%5==0){
    b=a/5;
    printf("%ld",b);
}
else{
    b=a/5;
    b++;
    printf("%ld",b);
}
    return 0;
}