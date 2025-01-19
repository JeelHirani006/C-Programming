#include"stdio.h"
void main ()
{
    int i,size,n,flag=0;
    printf("enter a size ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("enter value ");
        scanf("%d",&a[i]);
    }
    printf("enter a element ");
    scanf("%d",&n);
    for(i=0;i<size;i++)
    {
        if(a[i]==n)
        {
           flag=1;     
        }
    }
    if(flag==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}    