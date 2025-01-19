#include"stdio.h"
float max(float,float,float);
void main ()
{
      float a,b,c,ans;
      printf("enter a three number ");
      scanf("%f %f %f",&a,&b,&c);
      ans=max(a,b,c);
      printf("%f",ans);
}
float max(float x,float y,float z)
{
    if(x<y)
    {
        if(y>z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if(x>z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
}