#include "stdio.h"
void main()
{
    int i,j,n=10;
    for(i=1;i<=n;i++)
    { for (j=1;j<=n;j++)
     {
         if((2<=i&&i<=n-1)&&(2<=j&&j<=n-1))
         {
            printf("     ");
         }
         else
         {
            printf("  *  ");
         }
     }
      printf("\n");
    }
  
}