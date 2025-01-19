#include"stdio.h"
void main()
{
    int year,week,day,t;
    printf("enter value of day");
    scanf("%d",&day);
    year=day/365;
    t=day%365;
    week=t/7;
    day=t%7;
 printf("year %d week %d day %d",year,week,day);

}
