#include "stdio.h"
void main()
{   int i;
    char a[12];
    gets(a);
    for(i=0;*(a+i)!='\0';i++)
    {
       if(*(a+i)!=' ')
        {
          printf("%d%c\n",*(a+i),*(a+i)); 
        }
       
    }
}
