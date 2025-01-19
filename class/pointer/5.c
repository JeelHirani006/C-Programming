#include "stdio.h"
void main()
{
    int a[3][3]={{1,11,22},{34,45,89},{56,66,4}};
    int *ptr[3];
    ptr[0]=*a;
    ptr[1]=*(a+1); //*a==>base adress
    ptr[2]=*(a+2);//**a==>base adress ni value
    printf("%d",ptr[0]);

}