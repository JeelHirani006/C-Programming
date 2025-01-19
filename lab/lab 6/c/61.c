#include"stdio.h"
void main ()
{
  int a,b,c;
  printf("enter a,b,c ");
  scanf ("%d %d %d",&a,&b,&c);
  if(a<b&&b<c||c<b&&b<a)
  {
    printf("secound largest no=%d",b);
  }
  else if(b<a&&a<c||c<a&&a<b)
  {
    printf("secound largest no=%d",a);
  } 
  else if(a<c&&c<b||b<=c&&c<=a)
  {
    printf("largest no=%d",c);
  }

}