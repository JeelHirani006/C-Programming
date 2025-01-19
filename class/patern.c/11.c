#include "stdio.h"
void main()
{
    int i,j,n=5,k;
    for (i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++)//  *
        {                    //__*** agal ni space mukvi pachal nai
          printf("*");      //__*****
        }
        printf("\n");
    }
}