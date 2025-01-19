#include"stdio.h"
void main()
{
  int month,year;
  printf ("enter no of month and year");
  scanf("%d %d",&month,&year);
  switch(month)
  {case 1:
  printf("day=31");
  break; 
  case 2:  
  (year%4==0)?(printf("day=29")):(printf("day=28"));
  break; 
  case 3:
  printf("day=31");
  break;
  case 4:
  printf("day=30");
  break;
  case 5:
  printf("day=31");
  break;
  case 6:
  printf("day=30");
  break;
  case 7:
  printf("day=31");
  break;
  case 8:
  printf("day=31");
  break;
  case 9:
  printf("day=30");
  break;
  case 10:
  printf("day=31");
  break;
  case 11:
  printf("day=30");
  break;
  case 12:
  printf("day=31");
  break;
  }
}