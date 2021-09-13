#include<stdio.h>

int main(){

    int n;
    int input;
    float sum=0;
    scanf("%d",&n);
   // int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&input);
        sum=sum+input;
       }

   // printf("%lf\n",sum);
    float total=n*100;
    // printf("%lf\n",total);

    float fraction= sum/total;
    float res= fraction/0.01;
    printf("%f",res);

    return 0;

}