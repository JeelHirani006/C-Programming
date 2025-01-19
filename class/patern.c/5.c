#include"stdio.h"
void main ()
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++)// i==>row number j==>columan number 
    {
        for(j=1;j<=i;j++)
        {
            if (m==1)
            {
               m=0;
            }
            else {
                m=1;
            }
            printf("  %d",m);
            
        }
        printf("\n");
    }
    
}