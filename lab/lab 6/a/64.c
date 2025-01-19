#include "stdio.h"
void main ()
{
 int a,ans,j;
 printf("enter value");
 scanf("%d",&a);
 ans=a%10;
 j=ans%2;
 if (j==0)
 {
    printf("number is even ");
 }
 else
{
 printf("number is odd ");
}

 
}
