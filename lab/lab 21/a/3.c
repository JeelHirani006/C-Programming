#include"stdio.h"
union t
{
  int a;
  int b;
};
struct u
{
  int a;
  int b;
};
 void main ()
{
  struct u x;
  scanf("%d %d",&x.a,&x.b);
   printf("%d %d ",x.a,x.b);
   union t y;
   scanf("%d %d ",&y.a,&y.b);
   printf("%d %d ",y.a,y.b);
  int n= sizeof(x.a);
  printf("%d\n",n);
   n=sizeof(y.a);
  printf("%d",n);
}