#include"stdio.h"
void fib(int);
void main()
{
    int n;
    printf("enter a term");
    scanf("%d",&n);
    fib(n);
}
void fib(int n)
{
    int i,ans2=0,ans1=1,temp1=0,temp2=0;
    for(i=1;i<=n;i++)
    {
      temp1=ans2;
      ans2=ans1;
      ans1=temp1+temp2;
      printf("%d ",ans1);
      temp2=ans1;
    }
}