#include "stdio.h"
void main ()
{
  int i,a;
  printf("enter a value");
  scanf("%d",&a);
  for(i=1;i<=10;i++)
  {
    printf("%d  %d  %d \n",a,i,a*i);
  }
}