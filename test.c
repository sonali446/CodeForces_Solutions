#include<stdio.h>

int main(){

int n=120;
int arr[150];

for(int i=0;i<150;i++){
    arr[i]=0;
}

int c=2;

for(int i=2;i<n;i++){

for(int j=i;j<n;j++){ 
    if(j%c==0){
        arr[j]=1;
    }
}
c++;



}


    return 0;
}