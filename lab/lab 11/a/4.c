#include "stdio.h"
void main()
{
  int a,n,i,ans=1;
  printf("a^n");
  scanf("%d %d",&a,&n);
  for(i=1;i<=n;i++)
  {
    ans=ans*a;
  }
  printf("%d\n",ans);
}