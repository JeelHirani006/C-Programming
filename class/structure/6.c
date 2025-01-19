#include"stdio.h"
struct no
{
    int a;
    int b;
};
struct no add(struct no,struct no);
void main ()
{
      struct no x,y,z;
      x.a=10;
      x.b=15;
      y.a=15;
      y.b=20;
     z=add(x,y); 
      printf("%d %d ",z.a,z.b);
}
struct no add(struct no x,struct no y)
{
    struct no ans;
    ans.a=x.a+y.a;
    ans.b=x.b+y.b;
    return ans;
}