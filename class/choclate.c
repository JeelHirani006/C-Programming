#include"stdio.h"
void main ()
{ int money,i,cho=0,raper=0;
    printf("enter amount");
    scanf("%d",&money);
    for(i=1;money>0;i++)
    {
      cho=cho+1;
      money--;
      raper=raper+1;
      if(raper==3)
      {
        money++;
        raper=0;
      }
    }
printf("chocate=%d",cho);
}