#include<stdio.h>

int checksmallest(int n,int m){
    int smallest;
    if(n<=m){
    smallest=n;
}

else{
    smallest=m;
}

return smallest;
}


int main(){


int n,m;

scanf("%d %d",&n,&m);


int intersections;


int res=checksmallest(n,m);

if(res%2==0){
    printf("Malvika");
}
else{
printf("Akshat");
}

    return 0;
}

 
 