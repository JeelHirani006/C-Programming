#include"stdio.h"
void main()
{
    int i,j,n,sum=0;
    printf("enter a value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           sum=sum+j;
        }
    }
    printf("%d",sum);
}