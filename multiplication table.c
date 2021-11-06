#include <stdio.h>
void main()
{
    int i,n,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<11;i++){
        m=i*n;
        printf("%dx%d=%d\n",i,n,m);
    }
}
