
#include <stdio.h>
void main()
{
    int n,j,i;
    printf("enter the limit");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
          for(j=1;j<=i;j++){
              printf("%d",j);
          }
          printf("\n");
    } 
    
    
    
}
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/