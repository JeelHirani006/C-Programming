#include"stdio.h"
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
          if((2<=i&&i<=4)&&(2<=j&&j!=3))
          {
            printf("  ");
          }
          else
           { 
             printf("* ");
           }
        }
        printf("\n");
    }
}