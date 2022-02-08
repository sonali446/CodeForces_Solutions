#include<stdio.h>



int Check_Prime(double check){

    if(check==1){
        return -1;
    }

for(int j=2;j*j<=check;j++){

        if(check%j==0){
            return -1;
        }
    }
    return 1;


}

int main(){

    double n=2;
int res=Check_Prime(n);
printf("%d",res);

}