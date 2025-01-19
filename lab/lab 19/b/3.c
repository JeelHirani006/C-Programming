#include"stdio.h"
void swap(int*s1,int*s2,int a[],int b[]);
void main()
{ 
    int size1,size2;
    printf("enter a size1 and size2");
    scanf("%d %d",&size1,&size2);
    int a[size1],b[size2],i;
  for(i=0;i<size1;i++)
  {
        printf("enter a element for array a");
        scanf("%d",&a[i]);
  }
  for(i=0;i<size2;i++)
  {
        printf("enter a element for array b");
        scanf("%d",&b[i]);
  } 
     printf("befor");
  for(i=0;i<size1;i++)
  {
        printf("%d ",a[i]);
  }
  printf("\n");
  for(i=0;i<size2;i++)
  {
        printf("%d",b[i]);
  }
   swap(&size1,&size1,a,b);
   printf("after");
   for(i=0;i<size1;i++)
  {
        printf("%d ",a[i]);
  }
  printf("\n");
  for(i=0;i<size2;i++)
  {
        printf("%d",b[i]);
  }
}
void swap(int *s1,int *s2,int a[],int b[])
{    int temp,i;
     if(*s1>*s2)
    {  for(i=0;i<*s2;i++)
      {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
      }
      temp=*s2;
      *s2=*s1;
      for(;i<*s2;i++)
      {
        b[i]=a[i];
      }
      *s1=temp;

    }
    else
    {  for(i=0;i<*s1;i++)
      {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
      }
      *s1=temp;
      *s1=*s2;
      for(;i<*s2;i++)
      {
        b[i]=a[i];
      }
      *s2=temp;
    }
}


       
    
