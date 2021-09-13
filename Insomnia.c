#include<stdio.h>
int main(){

    int arr[4];
    int d,flag=0,count=0;
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&d);
    int arr2[d];
    count=d;

for(int i=0;i<4;i++){
 if(arr[i]==1){
        flag=1;
        printf("%d",d);
        break;
    }
}
   
   if(flag==0){ 
  
       for(int i=1;i<=d;i++){
           arr2[i]=i;
       }

       for(int i=0;i<4;i++){

           for(int j=2;j<=d;j++){
               if(arr2[j]%arr[i]==0){
                   arr2[j]=-1;
               }
           }       
       }
       for(int i=2;i<=d;i++){
           if(arr2[i]>0){
               count--;
           }
       }
       printf("%d",(count-1));

   }



    return 0;
}