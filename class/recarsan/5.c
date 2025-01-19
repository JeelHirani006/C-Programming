#include"stdio.h"
int squar(int,int);
void main ()
{  int n,m;
   printf("enter a value of n^m");
   scanf("%d%d",&n,&m);
   int ans=squar(n,m);
   printf("%d",ans);  
}
int squar (int n,int m)
{
     if (m==0)
     {
        return 1;
     }
     else
     {
        return n*(squar(n,m-1));//n*n*n
     }

     
}