#include"stdio.h"
void main ()
{ 
  int a,b,c;
  printf("enter value of a,b,c");
  scanf ("%d %d %d",&a,&b,&c);
 
  if((a==b)&& (b==c) && (a==c))
  {
    printf("equilater");
  }
  else if((a==b)|| (a==c) || (b==c))
  {
    printf("isoscaler");
  }
  else if ((a!=b)&&(b!=c)&&(a!=c))
  {
     printf("scaler");

  }
  else
  {

  }
  
  if ((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(c*c)+(b*b)==(a*a))
  {
    printf("right angle triangle");
  }
  else 
  {
    printf(" not right angle triangle");
  }

 }
  
