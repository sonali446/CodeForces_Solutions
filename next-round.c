#include<stdio.h>

int main(){

int n,k;

scanf("%d %d",&n,&k);
//printf("%d %d",n,k);
//int num;
int check=0;

   int num[n],test;
   int temp=0;
   for(int i=0;i<n;i++){ 
     scanf("%d",&num[i]);
    // if()
   }
   check=num[k-1];
   for(int j=0;j<n;j++){
      if(num[j]>0&&num[j]>=check){
         temp++;
      }
   }
   printf("%d",temp);
   
   /*for(int j=0;j<3;j++){ 
   printf("%d",num[j]);
   }*/
   

return 0;

}