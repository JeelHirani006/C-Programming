#include"stdio.h"
struct time
{
    int hou;
    int min;
    int sec;
};
struct time sum( struct time ,struct time );
void main ()
{
     struct time a,b,c;
     printf("enter a hour minute and secound");
     scanf("%d %d %d",&a.hou ,&a.min,&a.sec);
      printf("enter a hour minute and secound");
     scanf("%d %d %d",&b.hou ,&b.min,&b.sec);
     c=sum (a,b);
     printf("%d:%d:%d",c.hou,c.min,c.sec);
}
struct time sum( struct time a,struct time b)
{
    struct time ans;
    ans.hou=a.hou+b.hou;
    ans.min=a.min+b.min;
    ans.sec=a.sec+b.sec;
    return ans;
}