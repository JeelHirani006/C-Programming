#include"stdio.h"
void main()
{
    char a[100];
    char b[100];
    printf("enter a string");
    gets(a);
    char *p1;
    char *p2;
    p1=a;
    p2=b;
    for(;*p1!='\0';p1++)
    {
           *p2=*p1;
           p2++;
    }
    *p2='\0';
    puts(b);
}