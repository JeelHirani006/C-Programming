#include"stdio.h"
void main ()
{
    int s1,s2,s3,s4,s5;
    float result;
    printf("enter marks"); 
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    result=((s1+s2+s3+s4+s5)/5);
    if (result<=35)
    {
       printf("fail");

    }
    else if (result<=45)
    {
       printf("pass");

    }
    else if (result<=60)
    {
       printf("secound class");

    }
    else if (result<=70)
    {
       printf("first class");

    }
    else if (result<=100)
    {
       printf("Distinction");

    }
    


}