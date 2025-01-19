#include"stdio.h"
float intrest(int,int,int);
void main()
{
      int p,r,t;
      float ans;
      printf("enter a amount");
      scanf("%d",&p);
      printf("enter a intrest rate (%)");
      scanf("%d",&r);
      printf("enter a time ");
      scanf("%d",&t);
    ans=intrest(p,r,t);
    printf("%f",ans);

}
float intrest(int x,int y,int z)
{
        int ans;
        ans=(x*y*z)/100;
        return ans;
}