#include <stdio.h>

void main()
{
    int i,a[100],limit,sum=0;
            printf("enter array limit = ");
            scanf("%d",&limit);
            printf("enter the numbers");
    for (i=0;i<limit;i++)
    {

        scanf("%d",&a[i]);
        
    }
    
    for(i=0;i<limit;i++)
    {
        sum=sum+a[i];
    }
    printf("sum =%d",sum);
    
    
}