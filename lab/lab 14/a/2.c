#include "stdio.h"
void main ()
{
    int size,i,pos=0,nag=0;
    printf("enter a size ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("enter a value ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            pos++;
        }
        else
        {
            nag++;
        }
        
    }
    printf("%d %d",pos,nag);

}