#include<stdio.h>

int main(){
  
   char vow[]={'a','e','i','o','u','y','A','E','I','O','U','Y'};

    char cap[]={'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T'
    ,'V','W','X','Z'};
    
    char small[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t'
    ,'v','w','x','z'};

   char str[101];
   scanf("%s",str);
   int len=0;
   for(int i=0;str[i]!='\0';i++){
     len++;
   }

   for(int j=0;j<len;j++){
       for(int k=0;k<12;k++){

           if(str[j]==vow[k]){
               for(int l=j;l<len;l++){
                   str[l]=str[l+1];
               }
               len--;
               j--;
           }
       }
   }
 for(int m=0;m<len;m++){
      for(int n=0;n<20;n++){
          if(str[m]==cap[n]){
              str[m]=small[n];
          }
      }

  }
for(int z=0;z<len;z++){ 
printf(".%c",str[z]);
}


}