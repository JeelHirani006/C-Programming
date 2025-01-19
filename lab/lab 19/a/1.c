#include"stdio.h"//recurcive
int fec(int);
void main()
{
   int x,ans;
   printf("enter a number");
   scanf("%d",&x);
   ans=fec(x);    
   printf("%d",ans);
}
int fec(int x)
{
   int ans=1,i;
   for(i=x;i!=1;i--)
   {
    ans=ans*i;
   }
   return ans;
}