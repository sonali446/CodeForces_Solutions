#include<stdio.h>



int sqrt(long long n){
long long s=1;
if(n<2){
    return n;

}

while(s*s<=n){
    s++;
}

long long s1= s-1;

if(s1*s1!=n){
    return 1;
}

return s-1;

}

int Check_Prime(int check){

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




int n;
long long num;
scanf("%d",&n);






for(int i=0;i<n;i++){

  scanf("%I64d",&num);

  int checkSqrt =sqrt(num);

   //printf("%d",checkSqrt);
  int res=Check_Prime(checkSqrt);

  if(res==1){
      printf("YES\n");
  }
  else{
      printf("NO\n");
  }
}


    return 0;
}











/*int prime[1000000];

for(int i=0;i<1000000;i++){
    prime[i]=1;
}
prime[0]=0;
prime[1]=0;



for(int i=2;i<=1000000;i++){
temp=0;

    for(int j=2;j*j<=i;i++){

        if(i%j==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        prime[i]=1;
    }
}

int j=0,count=0;
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
}*/


