#include "stdio.h"
void main ()
{
    int a;
    int *p;
    int **j;
    a=10;
    p=&a;
    j=&p;
    printf("%d %d %d %d \n",p,*p,&a,&p);
    printf("%d %d %d %d",j,*j,**j,&j);
    // p==> store value of p(adress a)
    // *p==>p ma store adress ni value 
    // j==>store value of j(adress p)
    // *j==> j ma store adress ni value  (p ni value )
    // **j==> j ma store thayela adress(vlaue) ma store thayelu adress (value) ni value   
    //j==>p===>a==>value

}