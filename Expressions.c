#include<stdio.h>

int main(){

int a,b,c;

scanf("%d%d%d",&a,&b,&c);

int form1,form2,form3,form4,form5,form6;

form1= a+b*c;
form2=a*b*c;
form3=(a+b)*c;
form4=(a*b)+c;
form5=a*(b+c);
form6=a+b+c;


int arr[6];
arr[0]=form1;
arr[1]=form2;
arr[2]=form3;
arr[3]=form4;
arr[4]=form5;
arr[5]=form6;

int temp=0;
//int max=0;

for(int i=0;i<6;i++){
    if(arr[i]>temp){
        temp=arr[i];

    }

}
printf("%d",temp);


return 0;



}