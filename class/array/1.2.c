#include"stdio.h"
void main ()
{
  int a[32],b,i,temp;
  printf("enter value");
  scanf("%d",&b);
  for(i=1;i<=31;i++)
  {
    a[i]=0;
  }
   temp=b;
  for(i=0;b!=0;i++)
  { 
     a[i]=b%2;
     b=b/2;
  }
  if(temp<0)
  {for(i=0;i<=31;i++)
  {
    if(a[i]==0)
    {
      a[i]=1;
    }
    else
    {
      a[i]=0;
    }
  }
  }
  if(temp<0)
{
    for(i=0;i<32;i++)
{
   a[i]=a[i]+1;
   if(a[i]==2)
   {
    a[i]=0;
   }
  if (a[i]==1)
  {
    break;
  }
}
}  
  for(i=31;i>=0;i--)
  {
    printf("%d",a[i]);
  }

  
}