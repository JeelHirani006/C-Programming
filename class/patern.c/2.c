#include"stdio.h"
void main ()
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)   //==>row number print
        {
            printf("  %02d",i);
            m++;
        }
        printf("\n");
    }
    
}