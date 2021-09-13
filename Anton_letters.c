#include<stdio.h>
#include<string.h>


int main(){

    char str[1001];


   scanf("%[^\n]s",str);
    int len=0;

    for(int i=0;str[i]!='\0';i++){
        len++;
    }
   // printf("%d",len);

    for(int i=1;i<=len-2;i=i+3){
        for(int j=i+3;j<=len-2;j=j+3){
            if(str[i]==str[j]){
                str[j]='0';
            }

        }
    }
int distinct=0;
for(int i=1;i<=len-2;i=i+3){
    if(str[i]!='0'){
        distinct++;
    }
}

/*for(int i=0;str[i]!='\0';i=i+1){
   printf("%c",str[i]);
}*/

printf("%d",distinct);
    return 0;
}