#include"stdio.h"
void prime(int);
void armstrong(int); 
void perfect(int);
void  prime(int x)
{ int i,count=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
             count++;
        } 
    }
    if(count==0)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}
void armstrong(int x)
{
    int i,temp,sum=0,temp1,temp2,j,ans=1;
    temp1=x;
    temp2=x;
    for(i=1;x!=0;i++)
    {
       x=x/10;
    }
    temp=i;
    for(i=0;temp1!=0;i++)
    {   x=temp1%10;
        for(j=1;j<temp;j++)    
        {
            ans=ans*x;
        }
        sum=sum+ans;
        ans=1;
        temp1=temp1/10;
    }
    if(sum==temp2)
    {
        printf(" number is armstrong ");
    }
    else
    {
        printf(" number is not arm strong ");
    }

} 
void perfect(int x)
{
    int i,sum=0;
    for(i=1;i<x;i++)
    {
          if(x%i==0)
          { 
           sum=sum+i;
          } 
    }
    if(sum==x)
    {
        printf("number is perfect ");
    }
    else
    {
        printf("not perfect ");
    }
}




