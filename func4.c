#include <stdio.h>
int sum();
void main(){
    int k;
    k=sum();
    printf("sum= %d",k);
    
}
int sum(){
    int a,b,c;
    printf("enter the 2 numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}/*fuction no argument with return*/