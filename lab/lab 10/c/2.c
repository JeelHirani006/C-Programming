#include"stdio.h"
void main ()
{
     int i,a,b,ans=1,temp;
     printf("eter a number");
     scanf("%d %d",&a,&b);
      if(a>b)
      {
        temp=b;
      }
      else
      {
        temp=a;
      }
     for(i=1;temp!=i;i++)
     {
        if(a%i==0&&b%i==0)
        {
           ans=ans*i;  
        }
    }
    printf("%d",ans);
    printf("%d",((a*b)/ans));
}