#include<stdio.h>

int main(){

    char str[101];

    scanf("%s",str);

    char caps[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char small[]="abcdefghijklmnopqrstuvwxyz";
int count=0,count2=0;
//matRIX
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;j<26;j++){
            if(str[i]==caps[j]){
                count++;
            }
            if(str[i]==small[j]){
                count2++;
            }
        }
    }

   if(count>count2){
       for(int i=0;str[i]!='\0';i++){
           if(str[i]>=97 && str[i]<=122){
               str[i]=str[i]-32;
           }
       }
       printf("%s",str);
   }
   else{
        for(int i=0;str[i]!='\0';i++){
          
             if(str[i]>=65 && str[i]<=90){
               str[i]=str[i]+32;
           }  
           
       }
        printf("%s",str);
   }

   



    return 0;
}