#include"stdio.h"
void main()
{
    int i=1,n,sum=0,count=0,t=3;
    printf("enter a no of term");
    scanf("%d",&n);
    while(count<n)
    {
      sum=sum+i;
      i=i+t;
      t=t+2;
      count++;
    }
    printf("%d",sum);
}