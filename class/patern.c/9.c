#include "stdio.h"
void main ()
{
    int i,j,n=5,m=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
        m--;
    }
    
}