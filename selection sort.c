#include <stdio.h>

void main()
{
    int i,limit,a[100],temp,j;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the numbers ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is = ");
    for(i=0;i<limit;i++){
        printf("%d\t",a[i]);
    }
   
}
