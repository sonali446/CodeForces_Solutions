#include<stdio.h>

int main(){


int n,m;

scanf("%d %d",&n,&m);
int counter=0;

for(int i=0;i<n;i++){

    if(i%2==0){
        for(int i=0;i<m;i++){
            printf("#");
        }
        printf("\n");
    }

    else{
        if(counter%2==0){
        for(int i=0;i<m-1;i++){
            printf(".");
        }
        printf("#");
         printf("\n");
         counter++;
        }
        else{
            printf("#");
            for(int i=0;i<m-1;i++){
            printf(".");
        }
         printf("\n");
         counter++;
        }
         
        
    }
}
    return 0;
}

