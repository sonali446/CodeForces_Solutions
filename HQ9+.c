#include<stdio.h>



int main(){
 
 char str[101];
 scanf("%s",str);
 int flag=0;

 for(int i=0;str[i]!='\0';i++){
     if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
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