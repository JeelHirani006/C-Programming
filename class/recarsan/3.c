#include"stdio.h"
int sumdig (int);
void main ()
{ 
  int a,b;
  a=55;
  b=sumdig(a);
  printf("%d",b); 
}
int sumdig (int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10+sumdig(n/10); //n%10+sumdig(n/10)+(n/10)%10+sumdig(n/100)
    }                             //              ^~~~~~~~~~~~~~~~~~~~~~~~~~      
}