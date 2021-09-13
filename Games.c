#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n][2];

    for(int i=0;i<n*2;i++){
        int rows=i/2;
        int coloumns=i%2;

        scanf("%d",&arr[rows][coloumns]);
    }
int i=0,j=0,add=0,count=0;
    while(i<n){

        if(arr[i][0]==arr[j][1]){
             add++;
        }
        j++;
        count++;
        if(count%n==0){
            i++;
            j=0;
        }
    }

    printf("%d",add);

    return 0;
}