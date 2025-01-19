#include "stdio.h"
void a01(int b[],int);
void main ()
{
    int i,size;
  printf("enter a size");
  scanf("%d",&size);
  int a[size];
  for(i=0;i<size;i++)  
  {
     printf("enter a value ");
     scanf("%d",&a[i]);
  }
  printf("befor");
  for(i=0;i<size;i++)
  {
    printf("%d ",a[i]);
  }
  a01(a,size);
  printf("after");
  for(i=0;i<size;i++)
  {
    printf("%d ",a[i]);
  }
}
 void a01(int b[],int siz)      //function ma b[] modification thay to main na a[] ma pan thay
{                              // bane same adress na diff name chee 
    int i;                  // function ma modification thay to main ma pan thay kem ke same adress chee 
 for(i=0;i<siz;i++)
 {
    b[i]=i;
 }

}