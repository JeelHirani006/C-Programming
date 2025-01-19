#include"stdio.h"
void upcase(char x[]); 
void main()
{
    char x[100];
    printf("enter a string");
    gets(x);
    upcase(x);
    puts(x);
}
void upcase(char a[])
{ 
  int i,temp;
    for(i=0;a[i]!='\0';i++)
    {  
       if('a'<=a[i]&&a[i]<='z')
       {
        a[i]=a[i]-32;
       }

    }
}