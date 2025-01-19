#include"stdio.h"
void main ()
{   int b,p,i,j,ans=0;
    printf("enter a number^power");
    scanf("%d %d",&b,&p);
     int temp=b;
     int temp1;
     for(i=1;i<p;i++)
     {
        for(j=1;j<=temp;j++)
      {
         ans=ans+b;
      }
          temp1=ans;
          b=ans;
          ans=0;
     }

    printf("%d",temp1);
  
}
