#include<stdio.h>

int main(){
int len=0;
    char str[101];

    scanf("%s",str);
int len2=0;
    for(int i=0;str[i]!='\0';i++){
        len2++;
    }

    for(int i=0;i<len2;i++){
        for(int j=i+1;j<len2;j++){
            if(str[i]==str[j]){
                str[j]='\0';
            }
        }
    }
for(int i=0;i<len2;i++){
    if(str[i]=='\0'){
        continue;
    }
    else{
        len++;
    }
}

if(len%2==0){

    printf("CHAT WITH HER!");

}
else{
     printf("IGNORE HIM!");
}

return 0;
}
