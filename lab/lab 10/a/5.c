#include "stdio.h"
void main ()
{
  int a,t,ans=0;
  printf("enyter a value");
  scanf("%d",&a);
  while(a!=0)
  {
     t=a%10;
     ans=(ans*10)+t;
     a=a/10;
  }
    printf("%d",ans);
}