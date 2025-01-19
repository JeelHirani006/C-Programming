#include"stdio.h"
int decbin(int);
void main ()
{ int a;
  printf("enter a decimal number");
  scanf("%d",&a);
  int ans=decbin(a);
  printf("%d",ans);
}
int decbin(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return a%2+10*decbin(a/2);
    }
}