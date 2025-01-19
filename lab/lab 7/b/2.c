#include"stdio.h"
void main()
{
   char a;
   printf("enter a value");
   scanf("%c",&a);
   ((a>='A'&& a<='Z')||(a>='a' && a<='z'))?printf("a is a alphabed"):printf("a is not alphabed");

}