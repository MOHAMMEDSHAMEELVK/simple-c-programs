#include <stdio.h>
void main()
{
    float a,b,choice,ans;
    printf("enter your number\n");
    scanf("%f%f",&a,&b);
    printf("enter your choice\n1.+\n2.-\n3.x\n4./\nenter:");
    scanf("%f",&choice);
    if(choice==1){
        ans=a+b;
        printf("%f+%f=%f",a,b,ans);
    }else if(choice==2){
         ans=a-b;
        printf("%f-%f=%f",a,b,ans);
    }else if(choice==3){
         ans=a*b;
        printf("%fx%f=%f",a,b,ans);
    }else if(choice==4) {
         ans=a/b;
        printf("%f/%f=%f",a,b,ans);
    }else {
        printf("you are fool please enter correct choice");
    }
    
    
}