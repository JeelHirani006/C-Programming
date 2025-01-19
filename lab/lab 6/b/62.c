#include "stdio.h"
#include "math.h"
void main ()
{
  float a,b,c,ans1,temp,ans2;
  printf("enter value of abc");
  scanf("%f %f %f",&a,&b,&c);
  temp=b*b-4*a*c;
  temp=sqrt(temp);
  ans1=(-b+temp)/2*a;
  ans2=(-b-temp/2*a);

  printf ("%f,%f",ans1,ans2);

}