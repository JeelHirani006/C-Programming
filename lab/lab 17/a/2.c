#include"stdio.h"
void main()//error
{
    int *a;
    float *b;
    double *c;
    char *d;
    int t=10;
    float k=10;
    double l=10;
    char j='j'; 
    a=&t;
    b=&k;
    c=&l;
    d=&j;   
       printf("%d %d",a,*a);
    printf("\n %d %f",b,*b);
    printf("\n %d %lf",c,*c);
    printf("\n %d %c",d,*d);
}