#include"stdio.h"
#include"string.h"
struct a
{
    char b[100];
}; 
void main ()
{
    struct a c,t;
    //c.b[100]="xyz"
    strcpy(c.b,"jeel");//<==value assign direct karvi hoy tyare str cpy
    scanf("%s",t.b);//scan to normal rite thay 
    printf("%s\n",c.b);
    printf("%s",t.b);
}