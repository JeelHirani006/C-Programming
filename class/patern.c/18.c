#include"stdio.h"
void main()
{
    int i,j,n=10,s,p;
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
         printf(" ");
        }
        
         for(j=1;j<=2*i-1;j++) //<==
        {  if((2<=i&&i<=n-1)&&2<=j&&j<=2*i-2)
            {printf(" ");}
          else
          { printf("*");}
        }

       printf("\n");
        
    }
}