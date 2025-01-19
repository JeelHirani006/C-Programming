#include "stdio.h"
void main()
{int n,i=1,count=0;
  printf("enter a value ");
  scanf("%d",&n);
  while(i<=n)
  {
      if((n%i)==0)
      {
        count++;
      }
      i++;
  }  
  if (count==2)
  {
    printf("prime number");
  }
  else
  {
    printf("not prime number");
  }
}
