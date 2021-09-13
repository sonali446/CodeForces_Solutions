#include<stdio.h>

int main(){

    int n,a,b,total=0,temp=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);

        total= (total-a)+b;

        if(total>temp){
            temp=total;
        }
    }
printf("%d",temp);
    return 0;

}