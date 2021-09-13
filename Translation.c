#include<stdio.h>

int main(){

    char s[101];
    char t[101];
    int len=0,flag=0;

    scanf("%s",s);
    scanf("%s",t);

    for(int i=0;s[i]!='\0';i++){
        len++;
    }
    int j=0;
    for(int i=len-1;i>=0;i--){
        if(s[i]!=t[j]){
            printf("NO");
            flag=1;
            break;
        }
        j++;

 
    }

    if(flag==0){
        printf("YES");
    }
    



    return 0;
}