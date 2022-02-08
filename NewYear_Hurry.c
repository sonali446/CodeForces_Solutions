#include<stdio.h>



int main(){


int n,k;

scanf("%d %d",&n,&k);


int arr[10]={5,15,30,50,75,105,140,180,225,275};

int totalMin=240-k;
int x= n-1;

int flag=0;

while(x>=0){
    if(arr[x]<=totalMin){
        printf("%d",x+1);
            flag=1;
        break;
    }
    else{
        x--;
    }


}

if(flag==0){
    printf("0");
}

return 0;

}