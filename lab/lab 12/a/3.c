#include"stdio.h"
void main()
{
    int i,j,t;
    for(i=1;i<=5;i++)
    {
        for(j=1,t=5;j<=i;j++)
        {
            printf("%d",t);
            t--;
        }
        printf("\n");
    }
}