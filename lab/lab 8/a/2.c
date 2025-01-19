#include "stdio.h"
void main ()
{
  int n=1,t;
  printf("enter a value");
  scanf("%d",&t);
  while(n<=t)
  {
    if(n%2!=0)
    {
    printf("%d",n);
    }
    n++;
  }
}
