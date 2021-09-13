#include<stdio.h>

int main(){

int n;
scanf("%d",&n);
int arr[n];
int even=0,odd=0,EI=0,OI=0;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

    if(arr[i]%2==0){
        even++;
        EI=i;
    }
    else{
        odd++;
        OI=i;

    }
}

if(even<odd){
    printf("%d",(EI+1));
}else{
    printf("%d",(OI+1));
}
    return 0;
}