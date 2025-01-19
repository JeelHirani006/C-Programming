#include"stdio.h"
void main()
{
  int a,i,b;
  printf("enter a two number ");
  scanf("%d %d",&a,&b);
  i=a+1;
   while(a<i&&i<b)
   {
       if(i%2==0)
       {
        printf("%d ",i);
       }
       i++;
   }
}