#include"stdio.h"
int replace(char ,char,char t[]);
void main()
{
      char a,b[100],c;
      printf("enter a string");
      gets(b);
      printf("enter a charecter you want to replace");
      scanf("%c",&a);
      printf("enter a charecter you want with replace");
      scanf("%c",&c);
      replace(a,c,b);
      puts(b);
   
}
int replace (char x,char y,char t[])
{     int i;
    for(i=0;t[i]!='\0';i++)
    {
         if(x==t[i])
         {
           t[i]=y;
         }  
    }

    
}