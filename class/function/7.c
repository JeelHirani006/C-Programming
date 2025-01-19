#include"stdio.h"
void rev(int *p,int);
void main()
{
     int size,i;
     printf("enter a size");
     scanf("%d",&size);
     int a[size];
     for(i=0;i<size;i++)
     {
        printf("entera a value ");
        scanf("%d",&a[i]);
     }
     rev(a,size);
     for(i=0;i<size;i++)
     {
         printf("%d ",a[i]);
     }
}
void rev(int *p,int size)  // jo a[] aa array ne e base adrss mali jay 
{                          //   *P thi eni base adress store thay (var ni jem )
        int i,temp;
        for(i=0;i<size/2;i++)
        { 
           temp=*(p+i);
          *(p+i)=*(p+size-1-i);//a[0],a[1],a[2] size=3;
          *(p+size-1-i)=temp; //  1    2      3  last index(size-1);
        }                    
}