#include "stdio.h"
void main ()
{
  int a,b,j,sum,subt,multi,div;
  printf ("enter a value 1=+, 2=-,3=*,4=/");
  scanf("%d",&j);
  printf("enter value of a and b");
  scanf("%d %d",&a,&b);
  switch(j)
  {
  case 1:
  sum=a+b;
  printf("sum=%d",sum);
  break;
  case 2:
  subt=a-b;
  printf("subt=%d",subt);
  break;
  case 3:
  multi=a*b;
  printf("multi=%d",multi);
  break;
  case 4:
  div=a/b;
  printf("div=%d",div);
  }
}