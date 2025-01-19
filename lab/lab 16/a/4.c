#include"stdio.h"
void main()
{   int size1 ,size2,i,j; 
    printf("enter a size ");
   scanf("%d %d",&size1,&size2);
    int a[size1][size2];
    int b[size1][size2];
    int ans[size1][size2];
    for (i=0;i<size1;i++)
    {
           for(j=0;j<size2;j++)
           {
              printf("enter a value of matrix a");
              scanf("%d",&a[i][j]);
           }
    }
    for (i=0;i<size1;i++)
    {
           for(j=0;j<size2;j++)
           {
              printf("enter a value of matrix b");
              scanf("%d",&b[i][j]);
           }
    }
    for (i=0;i<size1;i++)
    {
           for(j=0;j<size2;j++)
           {
              ans[i][j]=a[i][j]+b[i][j];
           }
    }
    for (i=0;i<size1;i++)
    {
           for(j=0;j<size2;j++)
           {
              printf("%2d ",ans[i][j]);
           }
           printf("\n");
    }

}