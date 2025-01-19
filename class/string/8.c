#include"stdio.h"
void main ()
{   int i;
    char a[10];
    char b[10];
    gets(b);
    for(i=0;i!='\0';i++)
    {
       b[i]=a[i];
    }
    printf("%s",b);
}