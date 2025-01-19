#include "stdio.h"
void main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("%d %d %d",p,*p, &p); 
    // p==>p ma store thayelu adress(a nu adress)
    //*p==>p ma store thayel adress ane e adress ni value (a ni value)
    //&p==>p nu adress

}