#include <stdio.h>

void main()
{
    int i,limit,a[100],s=0;
    printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the number");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            s=s+1;
        }
    }
    printf("Number of even numbers in the given array is %d",s);
        
    
        
   

}