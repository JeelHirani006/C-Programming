#include "stdio.h"
void main ()
{   int i,j;
    int a[3][3]={{5,10,15},{20,25,30},{35,40,45}};
    {
        for(i=0;i<3;i++) //i<size (equal na ave)
        {
          for(j=0;j<3;j++)    //pointer==>type of variable
          {
            printf("%02d ",*(*(a+i)+j));
          }
          printf("\n");
        }
    }
}