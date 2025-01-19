#include"stdio.h"
void main()
{ int size1,size2,i,j;
    printf("enter a size");
    scanf("%d %d",&size1,&size2);
    int a[size1][size2];
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            printf("enter a value");
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<size2;i++)
    {
        for(j=0;j<size1;j++)
        {
            printf("%2d ",a[j][i]);
        }
       printf("\n");
    }
}