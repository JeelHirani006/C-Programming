#include"stdio.h"// error
void main()

{   int size1 ,size2,size3,size4,i,j,k,m,temp=0; 
    printf("enter a size ");
   scanf("%d %d",&size1,&size2);
    int a[size1][size2];
     printf("enter a size ");
   scanf("%d %d",&size3,&size4);
    int b[size3][size4];
    int ans[size1][size4];
    if(size2!=size3)
    {
        printf("multiplication not posibal");
    }
    else
    {
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
           for(j=0;j<size4;j++)
           {
            
            for (k=i;k<size1;k++)
            {
                for(m=j;m<size4;m++)
            {
                temp=temp+a[m][i]*b[k][i];
            }
            }
            ans[i][j]=temp;
            temp=0;
           }
    }

    for (i=0;i<size1;i++)
    {
           for(j=0;j<size2;j++)
           {
             
              printf("%d ",ans[i][j]);
           }
           printf("\n");
    }
    }
}