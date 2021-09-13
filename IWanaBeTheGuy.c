#include<stdio.h>
int main(){

int n,x_size,y_size;
scanf("%d",&n);

scanf("%d\t",&x_size);
int X[x_size];
for(int i=0;i<x_size;i++){
    scanf("%d",&X[i]);
}

/*for(int i=0;i<x_size;i++){
    printf("%d",X[i]);
}*/

 
scanf("%d\t",&y_size);
int Y[y_size];
for(int i=0;i<y_size;i++){
    scanf("%d",&Y[i]);
}

/*for(int i=0;i<y_size;i++){
    printf("%d",Y[i]);
}*/

int arr[n];

int count=n;

for(int i=1;i<=n;i++){
    arr[i]=i;
}

for(int i=0;i<x_size;i++){
   for(int j=1;j<=n;j++){
       if(X[i]==arr[j]){
           count--;
           arr[j]=-1;
       }
   }
}

for(int i=0;i<y_size;i++){
   for(int j=1;j<=n;j++){
       if(Y[i]==arr[j]){
           count--;
           arr[j]=-1;
       }
   }
}

if(count==0){
    printf("I become the guy.");
}
else{
    printf("Oh, my keyboard!");
}


    return 0;
}