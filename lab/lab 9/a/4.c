#include "stdio.h"
void main()
{ int n,i=1,ans=1;
  printf("enter a value");
  scanf("%d",&n);
  while(i<=n)
  {
    ans=ans*i;
    i++;
  }
  printf("%d \n",ans);

}