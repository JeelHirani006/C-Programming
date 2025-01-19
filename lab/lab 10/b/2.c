#include "stdio.h"
void main ()
{
  int a,flag=0,i=2;
  printf("enter a value");
  scanf("%d",&a);
  while(i<a)
  {
    if(a%i==0)
    {
      flag=1;
    }
    i++;
  }
  if(flag==0)
  {
    printf("this is a prime number ");
  }
  else
  {
    printf("this is not prime number");
  }

}