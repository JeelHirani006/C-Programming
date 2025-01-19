#include "stdio.h"
void main ()
{
  int n,ans,rev;
  printf("enter a number");
  scanf("%d",&n);  
  while(n!=0)
  {
     ans=n%10;
     printf("%d \n",ans);
     n=n/10;
  } 
}