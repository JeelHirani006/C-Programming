#include "stdio.h"
#include "string.h"
void main ()
{ int pr;
  char a[10];
  gets(a);
  pr=strlen(a);
  printf("%d",pr);
}