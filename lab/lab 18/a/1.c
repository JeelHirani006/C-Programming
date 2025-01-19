#include"stdio.h"
int sum(int,int);
void main ()
{
     int a,b,ans;
     printf("enter a vlueof a");
     scanf("%d",&a);
      printf("enter a vlueof b");
     scanf("%d",&b);
     ans=sum(a,b);
     printf("==>%d",ans);
}
int sum(int x,int y)
{
    int ans;
    ans=x+y;
    return ans;
}

