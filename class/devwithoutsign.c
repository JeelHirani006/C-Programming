#include"stdio.h"
void main()
{int a,b,rec,i,t1,t2;
  printf (" enter valuae of a/b");
  scanf("%d %d",&a,&b);
  
  for(i=1;rec>=0;i++)
  { t1=rec;  //==>ek vakhat 
    t2=i-1;
    rec=a-b*i;
  }
  printf("reminder %d, cousent %d",t1,t2);

}