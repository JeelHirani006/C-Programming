#include"stdio.h"
void main()
{int size1,i,j,sum=0;
  printf("enter a size");
  scanf("%d",&size1);
    int a[size1][size1];
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size1;j++)
        {
            printf("enter a value");
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<size1;i++)
    {
        for(j=0;j<size1;j++)
        {
           if(i==j)
           {
               printf("%d ",a[i][j]);
             sum=sum+a[i][j];
           }
        }
    }
    printf("\n%d",sum);
}    