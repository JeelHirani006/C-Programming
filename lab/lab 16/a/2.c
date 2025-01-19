#include"stdio.h"
void main()

{ int c1=0,c2=0,c3=0;
        
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            printf("enter a value");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            if(a[i][j]>0)
            {
                c1++;
            }
            if(a[i][j]<0)
            {
                c2++;
            }
            if(a[i][j]==0)
            {
                c3++;
            }

        
        }
    }
           printf("postive=%d nagetive=%d zero=%d",c1,c2,c3);
}
