#include<stdio.h>

int main(){
   
   char str[101];
  


   int count,count2;
int flag=0;int len=0;
  
       scanf("%s",str);
   int k=0;

   //int len= sizeof(str)/sizeof(str[0]);
   for(int i=0;str[i]!='\0';i++){
       len++;
   }
int j;
   for(int i=0;i<len;i++){
       count=0;
       count2=0;
      //str=11110111111100
      k=i;
       for(j=0;j<7;j++){

           if(str[k]=='0'){
              count++;
               
           }
            if(str[k]=='1'){
              count2++;
           }
         k++;

      }
      if(count==7||count2==7){
          printf("YES");
          flag=1;
          break;
      }

   
   }



  
   if(flag==0){ 
     printf("NO");
   }
   
   
return 0;


}