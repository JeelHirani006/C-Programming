#include"stdio.h"
void main()
{   char*j,*temp;
    char a[100];
    gets(a);
    char *p;
    p=a;
   for(;*p!='\0';p++)
   {
    if (*p==' ')     
    {     temp=p;
       for(j=p;*(p+1)!='\0';j++)
       {
         *p=*(j+1);
         p++;
       }
       *j='\0';
       temp--;
       p=temp;
    }
   
    else if(33<=*p&&*p<=47||58<=*p&&*p<=64||91<=*p&&*p<=96||123<=*p&&*p<=126)
    {
            
        temp=p;
       for(j=p;*(p+1)!='\0';j++)
       {
         *p=*(j+1);
         p++;
       }
       *j='\0';
       temp--;
       p=temp;
   }
 }
 printf("%s",a);
}