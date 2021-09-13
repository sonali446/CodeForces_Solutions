#include<stdio.h>
int main(){
 
 int year,flag;
 int arr[4];
 int divi=0,num=0;
 scanf("%d",&year);

 while(1){
    
     year=year+1;
     divi=year;
     for(int j=0;j<4;j++){ 
      num= divi%10;
      arr[j]=num;
     divi=divi/10;
     
     }
     flag=0;
     for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]){ 
            flag=1;
            break;
            }

        }
        if(flag==1){
            break;
        }
    }
     if(flag==0){
         printf("%d",year);
         break;
     }

 }
return 0;
}