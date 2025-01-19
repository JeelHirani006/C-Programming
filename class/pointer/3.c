#include "stdio.h"
void main()
{
    char a;
    a='a';  // pointer ane store karva mageta varibal no data type same hovo joye
    char *p;//adress ma +1 karta data type jetlu addition thay 
    p=&a;
    printf("%d \n",p);
    printf("%d",p+1);
    
}