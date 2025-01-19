#include "stdio.h"
void main ()
{   int i;
    int j;
    char a[100];
    char b[100];
    printf("enter a string");
    gets(a);
    printf("enter b string");
    gets(b);
    for(i=0;i!='\0';i++)
    {}
    a[i]=b[0];
    i++;
    for(j=1;j!='\0';j++)
    {
        a[i]=b[j];
        i++;
    }
    
    a[i]='\0';

    puts(a);
}