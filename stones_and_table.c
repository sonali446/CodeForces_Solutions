#include<stdio.h>
int main(){

int test;
scanf("%d",&test);

char str[test];
scanf("%s",str);
int count=0;

for(int i=0;str[i]!='\0';i++){
   
        if(str[i]==str[i+1]){
            count++;

        }
    
}

printf("%d",count);

return 0;
}