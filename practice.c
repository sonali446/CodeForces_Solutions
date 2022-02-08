#include<stdio.h>


/*int multiply(const int&,const int&);



int main(){

int a=10,b=20;


int res=multiply(a,b);
printf("%d",res);
return 0;
}

int multiply(const int &a,const int &b){
    
   return a*b;
}*/

int main(){

   int arr[5];

   for(int i=0;i<5;i++){
      arr[i]+=1;
   }

   for(int i=0;i<5;i++){
      printf("%d\t",arr[i]);
   }

}