#include<stdio.h>

int main(){

int n,sum=0,sum2=0;
scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    
}
int temp=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n-1;i=i+2){
    if((arr[i]+arr[i+1])%4==0){
        sum=sum+((arr[i]+arr[i+1])/4);
    }
    else{
        sum=sum+((arr[i]+arr[i+1])/4)+1;
    }
    //2 3 4 4 2 1 3 1
    
    
}

if(n%2==0){
    printf("%d",sum);
}
else{
    if(arr[n-1]%4==0){
        sum2=arr[n-1]/4;
    }
    else{
        sum2=(arr[n-1]/4)+1;
    }
    printf("%d",sum+sum2);
    
}



return 0;

}