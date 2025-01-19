#include"stdio.h"
void main ()
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++)// i==>row number j==>columan number n==>total row 
    {
        for(j=1;j<=n;j++)
        {
            printf("  %02d",m);
            m++;
        }
        printf("\n");
    }
    
}