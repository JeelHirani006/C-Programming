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
        printf("not same string");
        l=1;
        break;
       }  
    
    }
    if(l==0)
    {
        printf("same string");
    }
}
