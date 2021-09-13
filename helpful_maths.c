#include<stdio.h>

int main(){

char str[101];
int len=0;
int temp=0;

scanf("%s",str);
for(int i=0;str[i]!='\0';i++){
    len++;
}
//printf("%d",len);

int res= len/2;
int len2= len-res;

//printf("%d %d\n",res,len2);;
int arr[len2];

int j=0;

for(int i=0;str[i]!='\0';i=i+2){

    arr[j]= str[i];
    
    j++;


}

//int len2= sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<len2;i++){
    for(int j=i+1;j<len2;j++){
        if(arr[i]>arr[j]){ 
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }

    }
}

if(len2==1){
        printf("%c",arr[0]);
    }
    else{ 
        printf("%c",arr[0]);
for(int i=1;i<len2-1;i++){
    
    printf("+%c",arr[i]);
    
    
}
   printf("+%c",arr[len2-1]);

    }

    return 0;
}