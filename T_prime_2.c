#include<stdio.h>

int binarySearch(long long num,int count,long long arr[]){

int start=0;
int end=count-1;
//int flag=0;
while(start<=end){

    int mid= (start+end)/2;

    if(num==arr[mid]){
       
        return 0;
    }
    else if(num>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}

return 1;


}


int main(){


int prime[1000000];
for(int i=0;i<1000000;i++){
    prime[i]=1;
   
}
prime[0]=0;
prime[1]=0;

for(int i=2;i*i<=1000000;i++){

    if(prime[i]==1){
        for(int j=i;i*j<=1000000;j++){
            prime[i*j]=0;
        }
    }
}

/*for(int i=0;i<15;i++){
    printf("%d",prime[i]);
}*/


int count=0;

int j=0;
for(int i=2;i<1000000;i++){
    if(prime[i]==1){
        count++;
    }
}
long long arr[count];

for(long long i=2;i<1000000;i++){
    if(prime[i]==1){
        arr[j]=i*i;
        j++;
    }
}


int n;
long long num;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%I64d",&num);

   int res=binarySearch(num,count,arr);
   if(res==0){
       printf("YES\n");
   }
   else{
       printf("NO\n");
   }
}

    return 0;
}