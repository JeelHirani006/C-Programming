#include"stdio.h"
void main ()
{
    int i=1,sum=0,count=0,square;
    float avg;
    while(count!=10)
    {
           square=i*i;
           if((square%10)==3)
           {
             sum=sum+square;
             count++;
           }
           i++;
    }
    avg= sum/count;
    printf("%d ",sum);
    printf("%f",avg);
}