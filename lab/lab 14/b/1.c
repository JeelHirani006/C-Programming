#include "stdio.h"
void main ()
{
    int i,size,count=0;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
          printf("enter a value ");
          scanf("%d",&a[i]);
    }
    int sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    float avg=sum/size;
    for(i=0;i<size;i++)
    {
        if(a[i]>avg)
        {
            count++;
        }
    }
     printf("%d",count);
}