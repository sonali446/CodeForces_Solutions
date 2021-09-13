#include<stdio.h>

int main(){

int s,n;

scanf("%d %d",&s,&n);

int x[n*2];

//int y[2];
int flag=0;
for(int i=0;i<(n*2);i++){

    scanf("%d",&x[i]);
}


//printf("%d",s);*/
for(int i=0;i<n*2;i=i+2){

    for(int j=0;j<n*2;j=j+2){
   if(x[j]!=-1){

     if(s>x[j]){ 
           s=s+x[j+1];
          // printf("%d",s);
           x[j]=-1;
       }
   }


     
   }
}

for(int i=0;i<n*2;i=i+2){
   if(x[i]!=-1){
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