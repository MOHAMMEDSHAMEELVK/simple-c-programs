#include <stdio.h>
int sum(int,int);
void main()

{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum= %d",c);
}
int sum(int num1,int num2){
    int s;
    s=num1+num2;
    return s;
}/*function with argument and with return value*/