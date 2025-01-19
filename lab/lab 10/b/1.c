#include "stdio.h"
void main ()
{
  int a,i=1,sum=0;
  printf("enter a value");
  scanf("%d",&a);
  while(i<a)
  {
     if(a%i==0)
     {
      sum=sum+i;
     }
     i++;
  }
  if(sum==a)
  {
    printf("this is parfect number");
  }
  else
  {
    printf("this is not perfect number");
  }
}
