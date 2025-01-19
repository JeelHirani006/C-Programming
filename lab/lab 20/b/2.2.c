#include"stdio.h"
void main()
{   int i;
    char a[100];
    char b[100];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
      b[i]='\0';
      puts(b);
}