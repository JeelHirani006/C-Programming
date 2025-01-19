#include"stdio.h"
void main( )
{
    float a;
    printf("enter salery");
    scanf("%f",&a);
    if (a>=30000)
    { float t,hra,da;
        hra=a*0.3;
        da=a*0.95;
        t=hra+da+a;
        printf("salery=%f",t);
    }
    else if (a>=20000)
    { float t,hra,da;
        hra=a*0.25;
        da=a*0.9;
        t=hra+da+a;
        printf("salery=%f",t);
    }
    else if (a>=10000)
    { float t,hra,da;
        hra=a*0.2;
        da=a*0.8;
        t=hra+da+a;
        printf("da=%f",t);
    }

}