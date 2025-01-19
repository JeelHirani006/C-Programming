#include"stdio.h"
void main()
{
    int a,i,t=0;
    printf("enter a value");
    scanf("%d",&a);
    for(i=1;t!=1;i++)
    { 
       t=t+((a%10)*(a%10));
       
       if (t!=1&&a==0)   
       { 
        a=t;
        t=0;
       } 
       a=a/10;
    }
    if(t==1)
    {
        printf("this is a happy number");
    }
    
}