#include "stdio.h"
void main ()
{
    char a[10];
    char b[10];
    printf("enter a value of a");
    gets(a);
    printf("enter a value of b");
    gets(b);
    int i,j,k,temp,l=0;
    for (i=0;a[i]!='\0';i++)
    {
    }
    for (j=0;b[j]!='\0';j++)
    {
    }
    temp=(i<=j)?(j):(i);
    for(k=0;k<=temp;k++)
    {
       if (a[k]!=b[k])
       {
        int sum1=0,p,t,sum2=0;
        for (p=0;p<=i;p++)
        {
          sum1=sum1+a[p];
        }
        for(t=0;t<=j;t++)
        {
          sum2=sum2+b[t];
        }
        if(sum1>sum2)
        {
             printf("ans=+1");
        }
        else
        {
          printf("ans=-1");
        }
       

        
        l=1;
        break;
       }  
    
    }
    if(l==0)
    { 
       printf("ans=0");
    }
}
