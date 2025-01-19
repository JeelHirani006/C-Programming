#include "stdio.h"
void main ()
{
  int unit;
  float bill;
  printf("enter unit");
  scanf ("%d",&unit);
  if (unit>=250)
  { float s1,s2,s3,temp,s4;
     temp=(unit-250);
     s1=(temp*1.50);
     s2=( 100*1.20);
     s3=( 100*0.75);
     s4=(  50*0.50);
     bill=s1+s2+s3+s4;
     bill=(bill+bill*0.20);
     printf("%f",bill);
  }
  else if(unit>=150)
  {float s1,s2,s3,temp;
    temp=(unit-150);
    s1=(temp*1.20);
    s2=(100*0.75);
    s3=(50*0.50);
    bill=s1+s2+s3;
    bill=(bill+bill*0.20);
    printf("%f",bill);

  }
  else if (unit>=50)
 { float s1,s2,temp;
  temp=(unit-50);
  s1=(temp*0.75);
  s2=(50*0.50);
  bill=s1+s2;
  bill=(bill+bill*0.20);
   printf("%f",bill);
 }
 else
 {float s1;
  bill=(unit*0.50);
  bill=(bill+bill*0.20);
  printf("%f",bill);
 }
}