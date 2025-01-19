#include "stdio.h"
void main ()
{
    int a;
    printf ("1=+, 2=-,3=*,4=/");
    scanf("%d",&a);
    if (a==1)
    {int a,b,sum;
    printf("enter value");
     scanf("%d %d",&a,&b);
     sum=a+b;
     printf("sum=%d",sum);

    }
     if(a==2)
     { int a,b,subt;
      printf("enter value");
      scanf("%d %d",&a,&b);
     subt=a-b;
     printf("subt=%d",subt);

    }
    if(a==3)
     { int a,b,multi;
      printf("enter value");
      scanf("%d %d",&a,&b);
     multi=a*b;
     printf("multi=%d",multi);

    }
    if(a==4)
     { int a,b,div;
      printf("enter value");
      scanf("%d %d",&a,&b);
     div=a/b;
     printf("div=%d",div);

    }
     

    }

