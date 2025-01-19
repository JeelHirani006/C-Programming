#include"stdio.h"
void main ()
{    int i=1,a,b,sum=0;
     printf("enter a value of a and b");
     scanf("%d %d",&a,&b);
     if(a>b)
     {
          while (i<=b)
      {
            sum=sum+a;  
            i++;      
      }
     }
     else
     {
          while (i<=a)
      {
            sum=sum+b;    
            i++;    
      }
     }
     printf("%d ",sum);
     
}