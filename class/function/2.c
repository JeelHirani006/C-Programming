#include "stdio.h"
void max(int,int);
void main()
{   int a,b;
    printf("enter a value");
    scanf("%d %d",&a,&b);
       max(a,b);        // function ma print
}
void max(int x,int y)
{
  if (x<y)
  {                      //  |  
    printf("max=%d",y); //   |
  }                     //   |
  else                  //   | procijer nu out put function call kareye tya ave
  {                    //    | (printf kareye to print kare)
    printf("max=%d",x);//    | (return kareye to value ape )
  }
}