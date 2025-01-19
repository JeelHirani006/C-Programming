#include"stdio.h"
void main ()
{
    char a,v1,v2,v3,v4,v5;

    printf("enter charcter");
    scanf("%c",&a);
    v1='a',v2='e',v3='i',v4='o',v5='u';

    if(a==v1||a==v2||a==v3||a==v4||a==v5)
    {
        printf("this charcter is voweal");
    }
    else 
    {
         printf("this charecter is not a voweal");
    }
}