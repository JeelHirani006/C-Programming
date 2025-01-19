#include "stdio.h"
void main ()
{
    int a,b,c,largernumber;
    printf("enter number");
    scanf("%d %d %d",&a,&b,&c);
    largernumber=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
    printf("%d",largernumber);
}
