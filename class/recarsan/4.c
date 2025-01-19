#include"stdio.h"      
int fibona (int);         // 0 1 1 2 3 5........
void main ()
{   int n,i,m=0;
    printf("enter a turm");
    scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     fibona(i);
     printf("%d",fibona(m));
     m++;
 }

}
int fibona(int n)
{
    if (n==0||n==1)
    {
       return n;
    }
    else
    {
       return(fibona((n-1)+fibona(n-2))); 
    }

}