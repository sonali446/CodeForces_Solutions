#include<stdio.h>

int main(){

    int n,flag=0;
    scanf("%d",&n);

   int a=0;

    while(n>0){
        
      if(n%4==0 ||n%7==0||n%44==0||n%77==0||n%47==0||n%74==0||n%444==0||n%777==0||n%477==0||n%744==0||
      n%447==0||n%474==0||n%744==0||n%747==0){
          printf("YES");
          flag=1;
          break;
      }  
       
      a = n % 10;
        if(a!=4 && a!=7){
            printf("NO");
            flag=3;
            break;
        }
        /* if(a!=7){
            printf("NO");
            flag=4;
            break;
        }*/
        
        n=n/10;
        

    }

    if(flag==0){
        printf("YES");
    }

    return 0;
}