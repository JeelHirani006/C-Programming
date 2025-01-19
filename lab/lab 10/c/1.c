#include"stdio.h"
#include"math.h"
void main()
{    
    int a,i,counter=0,temp,temp2,sum=0;
    printf("enter a nuber");
    scanf("%d",&a);
    temp=a;
    int j=a;
    for(i=0;a!=0;i++)
    {   
       a=a/10;
       counter++;
    }
    for(i=0;temp!=0;i++)
    {
        temp2=temp%10;
        sum=sum+pow(temp2,counter);
    }
    if(sum==j)
    {
        printf("no is armstrong");
    }
    else
    {
        printf("no is not arm strong ");
    }
}