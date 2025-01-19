#include"stdio.h"
void main ()
{
    int i,size;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    int c[size];
    for(i=0;i<size;i++)
    {
        printf("enter value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
          c[i]=a[i];
    }
      for(i=0;i<size;i++)
      {
        printf("%d ",c[i]);
      }
}
