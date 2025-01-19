#include"stdio.h"
void main ()
{
    int i,j,m=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
}