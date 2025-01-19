#include"stdio.h"
void main()
{
    int a,b,*j,*p;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter a number");
    scanf("%d",&b);
    j=&a;
    p=&b;
    printf("%d",*j+*p);
}