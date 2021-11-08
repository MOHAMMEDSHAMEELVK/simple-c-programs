
#include <stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    
}
void sum(int num1,int num2)
{
    int result;
    result=num1+num2;
    printf("result= %d",result);
    
}/*functio with argument without return*/