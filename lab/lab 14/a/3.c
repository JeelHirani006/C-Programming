#include "stdio.h"
void main ()
{
    int size,i,odd=0,even=0;
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
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("odd=%d even=%d",odd,even);

}