#include<stdio.h>


int main(){
    int testCases;
    scanf("%d",&testCases);
   // char str[];
    int len=0;
    for(int i=0;i<testCases;i++){
       char str[101];
       scanf("%s",str);
       len=0;
       for(int j=0;str[j]!='\0';j++){
           len++;

       }

      if(len>10){ 
      printf("%c%d%c\n",str[0],len-2,str[len-1]);
      }
      else{
      printf("%s\n",str);
      }
    }


return 0;


   
}