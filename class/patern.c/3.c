#include"stdio.h"
void main ()
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++)// ==> columen number  
    {
        for(j=1;j<=n;j++)
        {
            printf("  %02d",j);
        }
        printf("\n");
    }
    
}