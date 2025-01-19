#include"stdio.h"
void main()
{
    float principal,time,roi,intrest;
    printf("enter value of principal time roi");
    scanf("%f %f %f",&principal,&time,&roi);
    intrest=(principal*time*roi)/100;
    printf("intrest=%f",intrest);
}