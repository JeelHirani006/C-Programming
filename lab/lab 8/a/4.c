#include "stdio.h"
void main ()
{
  int n,sum=0,i=1;
  printf("enter a value");
  scanf("%d",&n);
  while(i<=n)
  {
    sum=sum+i;
    i++;
  }
  printf("sum=%d",sum);
}