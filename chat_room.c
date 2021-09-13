#include<stdio.h>

int main(){

    char str[101];
    char str2[]="hello";

    scanf("%s",str);
    int count=0;
    int i,j,temp=0;

    for(i=0;i<5;i++){
        //hello
        //helhcludoo
        //hlelo
        for(j=temp;str[j]!='\0';j++){
            if(str2[i]==str[j]){
                count++;
                temp=j+1;
                break;
            }
        }
        

    }

    if(count==5){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}