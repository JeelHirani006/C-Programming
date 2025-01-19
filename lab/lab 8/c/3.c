#include"stdio.h"
void main()
{
  int i=0,a,n,counter=0,temp=0;
  printf("ente value of a and n");
  scanf("%d %d",&a,&n);
  while(a>=0)
  {
    a=a-n;
    counter++;
    temp=a+n;
    i++;
    
  }
  counter=counter-1;
  printf("%d",counter);
  printf(" %d",temp);
}