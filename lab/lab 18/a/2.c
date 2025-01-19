#include"stdio.h"
int max(int,int);
int min(int,int);
void main()
{
    int a,b,ans;
    printf("enter a value of a");
    scanf("%d",&a);
    printf("enter a value of b");
    scanf("%d",&b);
    ans=max(a,b);
    printf("max=%d ",ans);
    ans=min(a,b);
    printf("min=%d",ans);
}
int max(int x,int y)
{
  if(x>y)
  {
    return x;
  }
  else
  {
    return y;
  }
}
int min(int x,int y)
{
  if(x>y)
  {
    return y;
  }
  else
  {
    return x;
  }
}