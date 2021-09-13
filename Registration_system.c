#include<stdio.h>



int CheckEquality(char* str1,char* str2){
 int k=0;
 int flag=0;
 
    while(str1[k]!='\0' && str2[k]!='\0'){
          
           if(str1[k]!=str2[k]){
               break;
               flag=1;
           }
           
               k++;
           
       }
       if(flag==0){

           return k;
       }
       else{
           return 0;
       }

}
int main(){


int n;
scanf("%d",&n);
char str[n][32];
char res[n][32];
//for(int i=0;i<n;i++){
   // scanf("%[^\n]s",&str[i]);
//}

for(int i=0;i<n;i++){
   
    scanf("%s",str[i]);
}
/*for(int i=0;i<n;i++){
  
      printf("%s\t",str[i]);
}
printf("%s",str[0]);
if(str[0]!=str[1]){
    printf("YES");
}*/

int count;
int k=1;
int m=1;
res[0][0]="OK";
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
      
      count= CheckEquality(str[i],str[j]);

      if(count>0){
          
       
        res[j][0]=str[j];
        res[j][k-1]=m+'0';
        res[j][k]='\0';
        str[j][0]='\0';
        m++;
        }
        else{
            
            res[j][0]="OK";
        }

    }
    m=1;
 

}

for(int i=0;i<n;i++){
  
      printf("%s\n",res[i]);
}

    return 0;
}