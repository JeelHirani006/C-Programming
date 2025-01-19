#include "stdio.h"
#include"string.h"
void main ()
{ char a[10];
  char b[10];
  gets(a);    // a copy===>b
  strcpy(b,a);
  printf("%s",b);
}