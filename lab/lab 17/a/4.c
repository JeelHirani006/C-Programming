#include"stdio.h"
void main ()
{
    int a,b,temp,*p,*j;
    printf("enter a value");
    scanf("%d",&a);
    printf("enter a value");
    scanf("%d",&b);
    p=&a;
    j=&b;
    printf("a=%d b=%d \n",*p,*j);
    temp=*p;
    p=&b;
    j=&temp;
    printf("a=%d b=%d",*p,*j);
}