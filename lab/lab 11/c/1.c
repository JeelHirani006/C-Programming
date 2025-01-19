#include"stdio.h"
void main ()
{ int a,i,t1,t2,t=1;
   printf("enter a number ");
   scanf("%d",&a);
   int temp=a;
   for(i=0;a!=0;i++)
   {
      a=a/10;
   }
     t2=temp%10;
     for(;i!=0;i--)
     {
      t=t*10;
     }
     t=t/10;
     t1=temp/t;
     temp=temp-(t1*t);
      temp=temp-t2;

     temp=temp+t2*t;
      temp=temp+t1;
     printf("%d",temp);
 }