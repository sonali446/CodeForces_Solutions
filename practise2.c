#include<stdio.h>

int main(){


int x=10;

int **q=&x;

printf("%d\n",&x);
printf("%d",*q);
    return 0;
}