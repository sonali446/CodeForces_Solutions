#include<stdio.h>

int main(){

    long long int n;
    int flag=0,a=0,count=0;
    scanf("%lld",&n);

   

    while(n>0){
        
     /* if(n%4==0 ||n%7==0||n%44==0||n%77==0||n%47==0||n%74==0||n%444==0||n%777==0||n%477==0||n%744==0||
      n%447==0||n%474==0||n%744==0||n%747==0){
          printf("YES");
          flag=1;
          break;
      }  */
       
      a = n % 10;
        if(a==4 || a==7){
           // printf("NO");
           count++;
            
        }
        /* if(a!=7){
            printf("NO");
            flag=4;
            break;
        }*/
        
        n=n/10;
        

    }

    if(count==4 ||count==7||count==44||count==77||count==47||count==74||count==444||count==777||count==477||count==744||
      count==447||count==474||count==744||count==747){ 
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}