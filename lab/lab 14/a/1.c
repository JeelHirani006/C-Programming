#include"stdio.h"
void main ()
{
    int size,i;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    for (i=0;i<size;i++)
    {
        printf("enter a value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
      printf("%d ",a[i]);
    }
    for(i=size-1;i>=0;i--)
    {
       printf("  %d ",a[i]);
    }
    
}