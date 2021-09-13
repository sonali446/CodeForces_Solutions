#include<stdio.h>
int POLY(char);
int main(){

    int n;
    scanf("%d",&n);
    char str[n+1];
    int count=0,add=0;
   
    for(int i=0;i<n;i++){
         scanf("%s",&str[i]);

          //add=POLY(str);
         //count=count+add;
         if(str[i] =='T'){
            count = count+4;
        }
        else if(str[i] =='C'){
            count = count+6;
        }
         else if(str[i] =='O'){
            count = count+8;
             
        }

         else if(str[i] =='I'){
            count = count+20;
            
        }

         else if(str[i] =='D'){
            count = count+12;
            
        }
       
    }


printf("%d",count);

return 0;
}

/*int POLY(char str){
int count=0;
     if(str =='T'){
            count = count+4;
             return count;
        }
       
     else if(str =='C'){
            count = count+6;
             return count;
        }

         else if(str =='O'){
            count = count+8;
             return count;
        }

         else if(str =='I'){
            count = count+20;
             return count;
        }

         else if(str =='D'){
            count = count+12;
             return count;
        }
    
}*/