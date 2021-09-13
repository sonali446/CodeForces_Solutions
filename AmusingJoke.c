#include<stdio.h>

int main(){

char str1[101];
char str2[101];
char str3[101];

    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);

    
int arr1[26]={0},arr2[26]={0},flag=0;

 int i=0,j=0;
while(str1[i]!='\0'){
   
    if(str1[i]>=65){
         arr1[str1[i]-65]+=1;
    }

    i++;
   
}

i=0;
while(str2[i]!='\0'){
    if(str2[i]>=65){
         arr1[str2[i]-65]+=1;
    }

    i++;
   
}


for(int i=0;str3[i]!='\0';i++){
     if(str3[i]>=65){
         arr2[str3[i]-65]+=1;
    }
}

/*for(int i=0;i<26;i++){
    printf("%d  %d\n",arr1[i],arr2[i]);
}*/

for(int i=0;i<26;i++){ 
  
   if(arr1[i]!=arr2[i]){
      printf("NO");
      flag=1;
        break;
}

}

if(flag==0){
     printf("YES");
}



    return 0;
}