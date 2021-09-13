#include<stdio.h>

int divisibility(int a,int b){
    int add=0,result=0;

if(a%b==0){
    return 0;
}
else{ 
    while(a%b!=0){
        result=((a+add)%b);

        if(result==0){
            return add;
        }
        else{
            add++;
        }

    }
}

}

int main(){
    int testCases;
    scanf("%d",&testCases);
int a,b,res[testCases];
for(int i=0;i<testCases;i++){

       scanf("%d%d",&a,&b);
       res[i]=divisibility(a,b);
      
}

for(int i=0;i<testCases;i++){
    printf("%d\n",res[i]);
}


    

}