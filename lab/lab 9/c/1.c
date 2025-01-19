#include"stdio.h"
void main ()
{
  int a,i=0,temp1=0,temp=0;
  printf("enter a number");
  scanf("%d",&a);
  while(a!=0)
  {
       temp1=temp1+a%10;
       a=a/10;
       temp1=temp1*10;
       i++;
  }
  i=0;
  temp1=temp1/10;
  while(temp1!=0)
  {
        temp=temp1%10;
        if(temp==0) 
        {
          printf(" zero");
        }
        else if(temp==1)
        {
          printf(" one");
        }
        else if(temp==2)
        {
          printf(" two");
        }
        else if(temp==3)
        {
          printf(" three");
        }
        else if(temp==4)
        {
          printf(" four");
        }
        else if(temp==5)
        {
          printf(" five");
        }
        else if(temp==6)
        {
          printf(" six");
        }
        else if(temp==7)
        {
          printf(" seven");
        }
        else if(temp==8)
        {
          printf(" eight");
        }
        else if(temp==9)
        {
          printf(" nine");
        }
        temp1=temp1/10;
        i++;

  }
}