#include "stdio.h"
void main()
{
    int a,b,c;
    printf("enter value of abc");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    { if (a>c)
        {printf("%d is largest number",a);}
        else 
        {
            printf ("%d is largest number",c);
        }
    }
    else if (b>c)
    {
        printf("%d is largest number",b);

    }
    else
    {
        printf("%d is largest number",c);
    }
}