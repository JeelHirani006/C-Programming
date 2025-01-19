#include"stdio.h"
void main()
{ int n,i=1,temp,ans,temp2;
  printf("enter a number");
  scanf("%d",&n);
  temp2=n;
  while(n!=0)
  { 
    temp=n%10;
    n=n/10;
  }
     ans=temp+temp2%10;
     printf("%d",ans);
}