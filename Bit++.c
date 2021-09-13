#include<stdio.h>
int main(){
int num;

scanf("%d",&num);
    int len=0;
    

    for(int i=0;i<num;i++){
       char str[4];
       scanf("%s",str);
           if(str[1]=='+'){
               len++;

           }
           else {
              len--;
           }
       
    }
    printf("%d",len);

}