#include "stdio.h"
void main ()
{
    int size,i,avg,sum=0,max,min;
    printf("enter a size ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("enter a value ");
        scanf("%d",&a[i]);
    }
     max=a[0];
    for(i=0;i<size;i++)
    {
        if (max<a[i])
        {
           max=a[i];
        }   
    }
    printf("max=%d",max);
    min=a[0];
   for (i=0;i<size;i++)
    {
        if (min>a[i])
        {
           min=a[i];
        }   
    }
    printf("min=%d",min);
    for(i=0;i<size;i++)
    { 
        sum=sum+a[i];
    }
    printf("sum=%d",sum);

   avg=(sum/size);
   printf("avg=%d",avg);
    
}  
    

