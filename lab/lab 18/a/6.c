#include<stdio.h>
int swap(int,int *y);
void main()
{    int a,b;
    printf("enter a number ");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    a=swap(a,&b);
    printf("a=%d b=%d",a,b);
}
int swap(int x,int *y)
{
   int temp ;
   temp=x;
   x=*y;
   *y=temp;
   return x;
}