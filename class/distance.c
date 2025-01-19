#include"stdio.h"  //how many  difrent bit (distance in bit )
void main ()
{
    int a,b,j,k,count=0;
    printf("enter value");
    scanf("%d %d",&a,&b);
    while(a!=0||b!=0)
    {
        j=a%2;
        k=b%2;
        if(j!=k)
        {
         count++;
        }
        a=a/2;
        b=b/2;
    }
    printf(" abc=%d",count);

}