#include"stdio.h"
void main ()

{
    int i,size,temp,flag=0;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
          printf("enter a value ");
          scanf("%d",&a[i]);
    }
    for(i=0;;i++)
    { 
         if(i==size)
       {
        i=0;
        flag=0;
       }
       if (a[i]>a[i+1])
       {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;

           flag=1;
       } 
       if (flag==0 && i==(size-1))
       {
        break;
       }
    }
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
}


