#include<stdio.h>

int main(){

int n,m;

scanf("%d%d",&n,&m);

int arr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}
int temp=0;
for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int temp2=1000,res=0;
//4 5 6 7 8 9 10 11 12 12
for(int i=0;i<=m-n;i++){

res=arr[i+(n-1)]-arr[i];
//printf("%d",res);

if(res<temp2){
temp2=res;
}   

}


//printf("\n%d\t%d",arr[n-1],arr[0]);
//int res= arr[n-1]-arr[0];
printf("%d",temp2);

    return 0;
}
