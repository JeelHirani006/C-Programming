#include"stdio.h"
void main()
{
    int size,i;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    int b[size];
    for(i=0;i<size;i++)
    {
        printf("enter a number");
        scanf("%d",(a+i));
    }
     for(i=0;i<size;i++)
    {
        *(b+i)=*(a+i);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",*(b+i));
    }

}