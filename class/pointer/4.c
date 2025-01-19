#include "stdio.h"
void main ()
{   int k;
    int a[]={1,2,3,4,5,6,7,8,9};
    k=*(a+5);              //==> base adrees as a adress a==>a[0] not neet to read adress
    printf("%d \n",k);    //a[0]adress==>a in only array      
    //printf("%d",*(a+0));

}