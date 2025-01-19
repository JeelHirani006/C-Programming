#include "stdio.h"
void main()
{
  int a,i,rev=0,temp;
  printf("entea number ");
  scanf("%d",&a);
  temp=a;
  while(a!=0)
  {
    i=a%10;
    rev=(rev*10+i);
    a=a/10;
  }
  if(rev==temp)
  {
    printf("this is a palindrome number");
  }
  else
  {
    printf("this is not a palindrome number");
  }
}