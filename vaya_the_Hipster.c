#include<stdio.h>


int main(){

int a,b;
int c,d;
scanf("%d %d",&a,&b);


if(a<b){
    c=a;
    d=(b-a)/2;
    printf("%d %d",c,d);
}
else if(a>b){
    c=b;
    d=(a-b)/2;
    printf("%d %d",c,d);
}
else{
    c=a;
    d=0;
    printf("%d %d",c,d);
}

    return 0;
}