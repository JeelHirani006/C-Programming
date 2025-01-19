#include"stdio.h"
int prime(int,int);
void main ()
{     int a,b;
    printf("enter a enterval");
    scanf("%d %d",&a,&b);
    prime(a,b);
}
int prime(int x,int y)
{
    int i,j,count=0;
    for(i=x;i<=y;i++)
    {
        for(j=1;i>j;j++)
        { if(i%j==0)
           {
            count++;
           }
        }
        if(count==1)
        {
            printf("%d ",i);
        }
        count=0;
    }
}
