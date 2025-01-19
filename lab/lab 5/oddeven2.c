#include"stdio.h"
void main()
{
    int a, ans;
    printf("enter value");
    scanf("%d",&a);
    ans=1&a;
    if(ans==0) 
    {
        printf("number is even");

    }
    else
    {
        printf("number is odd");
    }
}