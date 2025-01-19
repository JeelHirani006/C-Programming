#include "stdio.h"
void main()
{
    int i,j,n=5,k,m=1;
    char c='A';
    for (i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)
        {                    
            if (i%2==0)
            {
                printf("%c",c);
                c++;
            }
            else
            {
                printf("%d",m);
                m++;
            }
        }
        printf("\n");
  }
}  