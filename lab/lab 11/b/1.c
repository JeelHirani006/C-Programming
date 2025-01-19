#include"stdio.h"
void main()
{
  int a=1,i,d,temp,ans=1;
  for(i=0;;i++)
  {
    ans=ans%10;
    temp=d;
    d=ans/10;
    d=ans%10;
    ans=temp+d;
  
  printf("%d",ans);
  }
}