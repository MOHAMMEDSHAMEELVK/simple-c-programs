#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(b>c)
        {
            printf("%dis big number",b);
        }else
        {
            printf("%dis big number",c);
        }
    }else
    {
        printf("%dis big number",a);
}
}