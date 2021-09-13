#include<stdio.h>

int main(){

int t,n;

scanf("%d",&t);
int arr[t];

for(int i=0;i<t;i++){

    scanf("%d",&n);

    if(n%2==0){
         arr[i]=((n/2)-1);
        //printf("%d",res);
    }
    else{
        arr[i]=(n/2);
        //printf("%d",res);
    }
}

for(int i=0;i<t;i++){
    printf("%d\n",arr[i]);
}

    return 0;
}