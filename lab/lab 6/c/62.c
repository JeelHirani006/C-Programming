#include"stdio.h"
void main()
{
  float r,g,b,w,c,m,y,k,t1,t2,t3;
  printf("enter value mof r g b");
  scanf("%f %f %f",&r,&g,&b);
  t1=r/255;
  t2=g/255;
  t3=b/255;
  if(t1<t2)
  {
    if(t2<t3)
    {
      w=t3;
    }
    else
    {
      w=t1;
    }

  }
  else
  {
    if (t1<t3)
    {
      w=t3;
    }
    else 
    {
      w=t1;
    }
  }
    printf("white=%f\n",w);
    c=(w-t1)/w;
    printf("cyan=%f\n",c);
    m=(w-t2)/w;
    printf("magenta=%f\n",m);
    y=(w-t3)/w;
    printf("yellow=%f\n",y);
    k=(1-w);
    printf("k=%f\n",k);

  
}