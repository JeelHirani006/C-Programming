#include "stdio.h"
void main ()
{
  int n=1,t;
  printf("enter a value");
  scanf("%d",&t);
  do
  {
    printf("%d \n",n);
    n++;
  } while(n<t);
  
}
