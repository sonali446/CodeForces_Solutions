#include<stdio.h>

int main(){

    int n,t;
    char temp;
    scanf("%d %d",&n,&t);

    char str[n];
    scanf("%s",str);
//8 3
/*BBGBGBGB
Output
my-GBGBBGBB
GGBGBBBB
Answer
GGBGBBBB*/

for(int j=0;j<t;j++){ 
    for(int i=0;i<n-1;i++){
        
        if(str[i]=='B' && str[i+1]=='G'){
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
            i=i+2;
            
        }
    }
}
printf("%s",str);

    return 0;
}