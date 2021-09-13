#include<stdio.h>

int main(){
    char str[101];
    scanf("%s",str);
    int flag=0;
    //char str2[101]=str;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>=97&&str[i]<=122){ 
          flag=2;
            for(int j=1;str[j]!='\0';j++){
               if(str[j]>=97&&str[j]<=122){
                   flag=1;
                   break;
               }
               
            }
            break;  
        }
        else{
            if(str[i]>=65&&str[i]<=90){
                flag=3;
                for(int j=0;str[j]!='\0';j++){
                    if(str[j]>=97&&str[j]<=122){
                        flag=1;
                        break;
                    }

                }
                
            }
            break;
        }


       
    }

    if(flag==1){
        printf("%s",str);
    }
   if(flag==2){

        str[0]=str[0]-32;
        for(int i=1;str[i]!='\0';i++){
            str[i]=str[i]+32;
        }
        printf("%s",str);
    }
    if(flag==3){
        for(int i=0;str[i]!='\0';i++){
            str[i]=str[i]+32;
        }
        printf("%s",str);
    }



    return 0;
}
