#include "stdio.h"
void main()
{
  int a,b;
  printf("enter a value");
  scanf("%d %d",&a,&b);
  (a^b==0)?(printf("number is  equal")):(printf("number is not equal"));
}