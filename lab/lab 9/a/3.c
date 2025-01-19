#include "stdio.h"
void main()
{
  int a,n,i=0,ans=1;
  printf("enter a value of a^n");
  scanf ("%d %d",&a,&n);
  while(i<n)
  {
    ans=ans*a;
    i++;
  }
  printf("%d \n",ans);
}