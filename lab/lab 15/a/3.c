#include"stdio.h"
void main ()
{
    int i,size,count=0;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("enter value");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%3==0)
        {
            count++;
        }
    }
    printf("==>%d",count);
}    