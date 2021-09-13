#include<stdio.h>

int main(){

    int test,sum=0,flag=0;
    scanf("%d",&test);

    int matrix[test][3];

    for(int i=0;i<test;i++){
        for(int j=0;j<3;j++){ 


        scanf("%d",&matrix[i][j]);
        }
        //printf("\n");
    }


  

    for(int i=0;i<3;i++){
        for(int j=0;j<test;j++){ 

            sum=sum+matrix[j][i];
       
        }
        if(sum!=0){
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