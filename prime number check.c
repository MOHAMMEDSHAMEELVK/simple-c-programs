#include <stdio.h>
void main()
{
    int i,n;
    printf("enter your number");
    scanf("%d",&n);
    if (n==2 ||n==3){
        printf("is prime");
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        {
            printf("%dis prime",n);
            break;
        }else
        {
            printf("%dis not a prime",n);
            break;
        }
    }
}