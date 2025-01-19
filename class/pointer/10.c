#include "stdio.h"
void main()
{
  char a[100];
  char b[100];
  printf("enter a a-string ");
  gets(a);
  int i,temp=0;
  for(i=0;*(a+i)!='\0';i++)
  {   if(*(a+i)!=' ')
     {   
        *(b+temp)=*(a+i);
         temp++;
     }
  }
  *(b+temp)='\0';
  printf("%s",b);
}