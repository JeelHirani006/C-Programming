#include "stdio.h"
void main()
{
  int a,i,sum=0;
  printf("enter a value");
  scanf("%d",&a);
  for (i=1;i<=a;i++)
  {
    sum=sum+i;
  }
  printf("%d\n",sum);
}