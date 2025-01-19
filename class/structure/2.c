#include<stdio.h>         //time addition
struct time
{
   int h;
   int m;
};
void main ()
{
    struct time t1,t2,ans;
    printf("enter a hour");
    scanf("%d %d",&t1.h,&t2.h);
    printf("enter a value of minute");
    scanf("%d %d",&t1.m,&t2.m);
    ans.h=t1.h+t2.h;
    ans.m=t1.m+t2.m;
    if(ans.m>=60)
    {
        ans.m=ans.m-60;
        ans.h++;
    }
    printf("%d:%d ",ans.h,ans.m);

}