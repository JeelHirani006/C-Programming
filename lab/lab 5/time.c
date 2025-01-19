#include"stdio.h"
void main()
{
    int secound,hour,minute;
    scanf("%d",&secound);
    hour=secound/3600;
    minute=secound%3600;
    printf("hour:minute %d:%d",hour,minute);


}