#include<stdio.h>

int main(){

    char str[201];
    

    scanf("%s",str);
    int len=0;
    
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    char str2[len];
for(int i=0;i<len-2;i++){
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
        str[i]=' ';
        str[i+1]=' ';
        str[i+2]=' ';
    }
}
/*int j=0;
for(int i=0;i<len-2;i++){
    if(str[i]!=' '){
        str2[j]=str[i];
        j++;

    }
}*/

printf("%s",str);
    return 0;
}