#include"stdio.h"
void main()
{
    int i,j,r,c;
    printf("enter a size");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int t[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("enter a value");
          scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
          t[j][i]=a[i][j];
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",t[i][j]);
        }
        printf("\n");
    }

}