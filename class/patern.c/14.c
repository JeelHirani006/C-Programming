#include "stdio.h"
void main ()
{
    int i,j,n=5,s,m=1;
    char c='A';
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i*2-1;j++)
        {
            if (i%2==0)
            {
                if(j%2==0)
                {
                    printf(" ");
                }
               else{ printf("%d",m);
                      m++;
                   }
            }
            else 
            {  if (j%2!=0)
            {
                printf("%c",c);
                c++;
            }
            else 
            {
                printf (" ");
            }
            }
        } 
        printf("\n");
    }
}
