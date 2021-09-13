#include<stdio.h>

int rooms(int a,int b){
    int count=0;

    if(a<b && b-a>=2){
        count++;
    }

return count;
    
}

int main(){

    int n,a,b;
    scanf("%d",&n);
    int res=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
         res= res+rooms(a,b);

    }
    printf("%d",res);

    return 0;
}

