#include"stdio.h"
void main ()
{
  int a[32],b,i;
  printf("enter value");
  scanf("%d",&b);
  for(i=1;i<=31;i++)
  {
    a[i]=0;
  }
  for(i=0;b!=0;i++)
  {
     a[i]=b%2;
     b=b/2;
  }
  for(i=31;i>=0;i--)
  {
    printf("%d",a[i]);
  }

}