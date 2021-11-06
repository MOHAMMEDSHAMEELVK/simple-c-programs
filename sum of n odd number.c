#include <stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter the limit");
    scanf("%d",&n);
   
    for(i=1;i<n;i++)
    {
          if(i%2!=0)
        {
            sum=sum+i;
        }
    } 
    printf("sum=%d",sum);
    
    
}