#include<stdio.h>
int add(int a,int b){
  return a+b;
}

int main(){

/*nt (*ptr1)(int,int);
ptr1 = &add;
int c = (*ptr1)(5,10);
printf("%d",c);*/

int n=1;

char s[]='sonali';

s=s+(n)+'0';

printf("%s",s);

return 0;
}

/*#include<stdio.h>
void func(int a)
{
    printf("Value of a is %d\n", a);
}
  
int main()
{
    
    void (*fun_ptr)(int) ;
  fun_ptr= &func;
    
  (*fun_ptr)(2);
  
    return 0;
}*/
