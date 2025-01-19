#include"stdio.h"
int digtno(int);
void main ()
{
     int n=12225;
     int x=digtno(n);
    printf("%d",x);
}
int digtno(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return 1+digtno(a/10);
    }
}