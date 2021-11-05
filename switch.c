
#include <stdio.h>

void main()
{
    float a,b,ans;
    int choice;
    printf("enter your number\n");
    scanf("%f%f",&a,&b);
    printf("enter your choice\n1.+\n2.-\n3.x\n4./\nenter:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
             ans=a+b;
        printf("%f+%f=%f",a,b,ans);
        break;
        
        case 2:
            ans=a-b;
        printf("%f-%f=%f",a,b,ans);
        break;
        
        case 3:
            ans=a*b;
        printf("%fx%f=%f",a,b,ans);
        break;
        
        case 4:
               ans=a/b;
        printf("%f/%f=%f",a,b,ans);
        break;
        
        default:
         printf("you are fool please enter correct choice");
    }
    
}