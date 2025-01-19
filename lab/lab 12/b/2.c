#include"stdio.h"
void main()
{
    float i,j,sum=1,fac=1;
    int n;
    printf("enter a value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {    fac=1;
        for(j=i;j!=0;j--)
        {
           fac=fac*j;
        }
        sum=(sum)+(1/fac);

    }
    printf("%f",sum);
}