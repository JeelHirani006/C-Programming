#include"stdio.h"
void main()
{
  int a,i,ans=1;
  printf("enter a number for fectorial");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    ans=ans*i;
  }
  printf("%d\n",ans);
}