#include "stdio.h"
void main ()
{
    int a[5],i,b[5],count;
    for(i=0;i<5;i++)
    { printf("enter weight ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    { printf("enter hight ");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    { 
        if(a[i]<50&&170>b[i])
        {
          count++;
        }
    }
    printf("%d",count);

}

