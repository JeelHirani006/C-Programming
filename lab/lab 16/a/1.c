#include"stdio.h"
void main()

{ int s1,s2;
        printf("enter a size");
      scanf("%d %d",&s1,&s2);
    int a[s1][s2],i,j;
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {   
            printf("enter a value");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {   
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }
} 