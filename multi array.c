
#include <stdio.h>
void main()
{
    
    int ar[100][100],i,j,n,m;
    printf("enter the no of row");
    scanf("%d",&m);
    printf("enter the no of colm");
    scanf("%d",&n);
    printf("enter the values");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
            
        }
    }
    printf("your array values are \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",ar[i][j]);
            
        }
        printf("\n");
    }
    
}