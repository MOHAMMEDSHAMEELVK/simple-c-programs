#include <stdio.h>

void main()
{
    int i,a[100],limit;
            printf("enter array limit = ");
            scanf("%d",&limit);
            printf("enter the numbers");
    for (i=0;i<limit;i++)
    {

        scanf("%d",&a[i]);
        
    }
    printf("enter valus are\t");
    for(i=0;i<limit;i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}