#include"stdio.h"
void main()
{
    int a,*p;
    printf("enter a value");
    scanf("%d",&a);
    p=&a;
    printf("%d %d",p,*p);
}