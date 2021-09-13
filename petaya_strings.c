#include<stdio.h>

int main(){

int len=0,first=0,second=0, flag=0;
    char str1[101];
    char str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

    for(int i=0;str1[i]!='\0';i++){
        len++;
    }
//lowercase
    for(int j=0;j<len;j++){
        if (str1[j]>=65 && str1[j]<=90){
            str1[j]=str1[j]+32;

        }
        if (str2[j]>=65 && str2[j]<=90){
            str2[j]=str2[j]+32;

        }
    }
 
     

     for(int i=0;i<len;i++){
         if(str1[i]<str2[i] ){
            flag=1;
            break;
         }
         if( str1[i]>str2[i]){
             flag=2;
             break;
         }
        
     }

     if(flag==0){
         printf("0");

     }
     else if(flag==1){
         printf("-1");

     }
     else{
         printf("1");
     }
     
 

    /*char cap[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'
    ,'U','V','W','X','Y','Z'};
    
    
    char small[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'
    ,'u','v','w','x','y','z'};

    for(int j=0;j<len;j++){
        for(int k=0;k<26;k++){
          if(  str1[j]==cap[k]){
              str1[j]=small[k];
          }

        }
    }
    for(int l=0;l<len;l++){
        for(int m=0;m<26;m++){
          if(  str2[l]==cap[m]){
              str2[l]=small[m];
          }

        }
    }
    


if(first<second){
    printf("-1");

}
else if(second<first){
    printf("1");
}
else{
    printf("0");
}*/


    

return 0;
}