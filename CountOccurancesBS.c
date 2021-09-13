#include<stdio.h>

int lastOccurance(int arr[],int n,int x){

    int low=0;
    int high= n-1;
    int mid=0,result=-1;
    while(low<=high){
       mid=(low+high)/2;

       if(x==arr[mid]){
           result=mid;
           low=mid+1;
       } 
       else if(x<arr[mid]){
           high=mid-1;
       }
       else{
           low=mid+1;
       }
    }
return result;
}

int FirstOccurance(int arr[],int n,int x){

    int low=0;
    int high= n-1;
    int mid=0,result=-1;
    while(low<=high){
       mid=(low+high)/2;

       if(x==arr[mid]){
           result=mid;
           high=mid-1;
       } 
       else if(x<arr[mid]){
           high=mid-1;
       }
       else{
           low=mid+1;
       }
    }
return result;
}


int main(){
printf("enter size");
int n;
scanf("%d",&n);


int arr[n];
printf("Enter the elements");

for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
}
printf("enter the number u want to search");
int x;
scanf("%d",&x);

int large=lastOccurance(arr,n,x);



int small=FirstOccurance(arr,n,x);


printf("%d",(large-small)+1);

    return 0;
}