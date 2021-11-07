#include <stdio.h>

void main()
{
    int i,limit,a[100],s,flag=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the numbers ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search number");
    scanf("%d",&s);
    for(i=0;i<limit;i++)
    {
        if(s==a[i])
        {
            flag=1;
            break;
            
        }
       
    }
    if (flag==1)
    {
        printf("iteam founded at %d",i+1);
    }else
    {
        printf(" sorry iteam not founded");
        
    }
}
