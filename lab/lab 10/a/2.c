#include "stdio.h"
void main ()
{ int i=0,n,a,sum=0,ans;
  printf("entera number of value");
  scanf("%d",&n);
  while (i<n)
  {
    printf("enter a value");
    scanf("%d",&a);
    sum=sum+a;
    i++;
  }
  ans=sum/n;
  printf("%d\n",ans);

}