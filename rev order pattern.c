#include <stdio.h>
void main()
{
    int i,j,n;
    printf("how many row?");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}