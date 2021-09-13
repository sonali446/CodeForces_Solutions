#include<stdio.h>
int main(){
  
int testCases;
scanf("%d",&testCases);
int len,len2=0,leng=0;
int temp;
  for(int i=0;i<testCases;i++){
     char solution[6];

        scanf("%c",&temp); // temp statement to clear buffer
	      scanf("%[^\n]",solution);

        len=0;
      for(int j=0;solution[j]!='\0';j++){
        
         
          if(solution[j]=='1'){
             len++;
          }  
      }
    
     
     if(len>=2){
          len2++;
      }
  }
 printf("%d\n",len2);
 

return 0;
}