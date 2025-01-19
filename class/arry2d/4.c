#include "stdio.h"
void main ()
{ int i,j,k,l,m,temp=0;
  printf("enter a size");
  scanf("%d %d %d",&i,&j,&l);
  int a[i][j];
  int b[j][l];
  int ans[i][l];
  printf("enter a value");
  for(k=0;k<i;k++)
  {
    for(m=0;m<j;m++)
    {
    printf("enter a value of matrix a");
     scanf("%d",&a[k][j]);
    }
  }
   for(k=0;k<l;k++)
  {
    for(m=0;m<j;m++)
    {
    printf("enter a value of matrix b");
     scanf("%d",&b[k][j]);
    }
  }for(m=0;m<i;m++)
  {
   for(k=0;k<j;k++)
   {
     temp=(a[m][k])*(b[k][m]);
     ans[m][k]=temp;  
     temp=0;
   }
    
    
  }for(m=0;m<=i;m++)
  {
    for(k=0;k<=j;k++)
    {
    printf("%d ",ans[m][k]);
    }
    printf("\n");
  }
}
