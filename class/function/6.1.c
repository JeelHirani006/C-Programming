#include "stdio.h"
void  read(int a[],int);
void  print (int a[],int);
int  max(int a[],int );
// void main ()
// {   int size;
//     int a[size];
//     read(a,size);
//     print(a,size);
//     max(a,size);    
// }
 void read(int b[],int size)
{   int i;
    for(i=0;i<size;i++)
    {   printf("enter a value");
        scanf("%d",&b[i]);
    }
}
void  print (int b[],int size)
{      int i;
    for(i=0;i<size;i++)
    {   
        printf("%d",b[i]);
    }
}
int  max(int b[],int size)
{       
    int max=b[0],i; 
     for(i=0;i<size;i++)
    {   
       if (max<b[i])
       {
        max=b[i];
       }
    }
    return max;
}