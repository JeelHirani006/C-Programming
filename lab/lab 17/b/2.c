#include"stdio.h"
void main ()
{
    int size,i,temp;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    int b[size];
    for(i=0;i<size;i++)
    {
        printf("enter a number for a");
        scanf("%d",(a+i));
    }
     for(i=0;i<size;i++)
    {
        printf("enter a number or b");
        scanf("%d",(b+i));
    }
    printf("befor");
    for(i=0;i<size;i++)
    {
       printf(" \n%d  %d",*(a+i),*(b+i));
    }
    for(i=0;i<size;i++)
    {
       temp=*(a+i);
       *(a+i)=*(b+i);
        *(b+i)=temp;
    }
    printf("after");
    for(i=0;i<size;i++)
    {
       printf(" \n %d  %d",*(a+i),*(b+i));
    }
}