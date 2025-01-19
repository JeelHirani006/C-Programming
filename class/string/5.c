#include "stdio.h"
#include "string.h"
void main ()
{   
    char a[10];
    char b[10];
    gets(a);   // <==(0,1,-1)
    gets(b);
    int t=strcmp(a,b);
    printf("%d",t);
}