#include<stdio.h>

int main(){

char line1[101];
char line2[101];

scanf("%s",line1);
scanf("%s",line2);



for(int i=0;line1[i]!='\0';i++){
    if(line1[i]==line2[i]){
        printf("0");
        
    }
    else{
        printf("1");
       
    }
}

    return 0;
}