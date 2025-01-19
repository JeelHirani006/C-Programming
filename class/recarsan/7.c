#include"stdio.h"
#include"math.h"
int bindec(int,int,int);
void main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;a<=0;i++)
    {
       a=a/10;
    }
    int t=0;
    printf("%d",bindec(a,i,t));
    
    
}   
 int bindec(int a,int i,int t)
{
    if(i<0)
    {
        return t;
    }
    else
    { 
         return t+=a%10*(2*t)+bindec(a/10,i--,t*2);
    }                                            
}                              //101
                            //  1*2^0+0*2^1+1*2^2++