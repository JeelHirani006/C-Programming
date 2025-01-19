#include"stdio.h"
int fac(int);
void main ()
{
    int n=5,x;
    x=fac(n);
    printf("%d",x);
}
int fac(int n)
{
    if(n==1)
    {
        return 1;    
    }
    else if(n==0)    
    {                
        return 1;       
    }
    else
    {
        return n*fac(n-1); 
    }                      
}