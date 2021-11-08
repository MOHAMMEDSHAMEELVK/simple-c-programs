
#include <stdio.h>
void sum();
void main()
{
    
    sum();
}
void sum()
{
    int sum,num1,num2;
    printf("enter the numbers");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("result is%d",sum);
}
/*function without argument without return*/