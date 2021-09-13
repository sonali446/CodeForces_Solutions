#include<stdio.h>

int main(){

int matrix[5][5];
int first=0,second=0;
int res1=0,res2=0,final=0;
  
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){

          scanf("%d",&matrix[i][j]);
      }
  }
for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){

         if(matrix[i][j]==1){
             first=i;
             second=j;
             break;

         }
      }
    
  }

 
  res1= abs(2-first);
  res2=abs(2-second);
   final= res1+res2;
   printf("%d ",final);


    return 0;
}