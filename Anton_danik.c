#include<stdio.h>


void won(char str[]){
    int A=0,D=0;
    for(int i=0;str[i]!='\0';i++){ 
        if(str[i]=='A'){
        A++;
        }
        else{
            D++;
        }
    }


if(A>D){
    printf("Anton");
}
else if(A<D){
     printf("Danik");
}
else{
    printf("Friendship");

}

}


int main(){

int Total_games;
scanf("%d",&Total_games);

char str[Total_games+1];

scanf("%s",str);
won(str);

    return 0;
}