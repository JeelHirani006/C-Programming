#include"stdio.h"
void main ()
{
    int i,j,n=5,k=5;
    for(i=1;i<=n;i++)// i==>row number j==>columan number 
    {
        for(j=1;j<=k;j++)   //1 row =5 bit 
        {                   //2row  = 4 bit          
            printf(" 1");   // 3row =  3bit  so onn.....         
        }
        printf("\n");
        k--;
    }
    
}