#include <stdio.h>
void main ()
{
  int a,i=0,odd=0,even=0;
  while(i!=10)
   {
      printf ("enter a value ");
      scanf ("%d",&a);
      if (a%2==0)
      {
        even++;
      }
      else 
      {
        odd++;
      }
      i++;
   }
   printf("odd=%d even=%d",odd,even);

}