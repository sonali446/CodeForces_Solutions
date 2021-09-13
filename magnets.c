#include<stdio.h>

int main(){

    int n,sum=1,total=0,total2=0,res;

    scanf("%d",&n);
    int str[n];
    int arr[n];
/*10 01 1
  10 01 1
  10 01 1
  01 10 0
  10 01 1
  10 01 1*/
    for(int i=0;i<n;i++){ 
       scanf("%d",&str[i]);
       if(str[i]==10){
            arr[i]=1;
        }
        else if(str[i]==01)
        {
            arr[i]=0;
        }
    }

for(int i=0;i<n;i++){
    if(arr[i]==1){
        total=total2+sum;
        res=total;
    }
    else {
        total2=total+1;
         res=total2;
        
    }
}
printf("%d",res);

/*for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}*/
    return 0;
}