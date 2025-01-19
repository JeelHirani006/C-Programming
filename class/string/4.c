#include "stdio.h"
void main()
{ int i;
  char a[10];
  printf("enter a value");
  gets(a);
  for(i=0;a[i]!='/0';i++)   /* a[0]=a a[1]=b a[2]=3...a[last]=/0(null)*/
  {
  }
   printf("%d",i);
}
