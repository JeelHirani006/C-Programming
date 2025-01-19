#include"stdio.h"
void main()
{   int i,j=0,flag=0;
    char a[100];
    char b[100];
    printf("enter a string");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {

    }
    i--;
    for(;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
   for(i=0;a[i]!='\0';i++)
   {
    if (a[i]!=b[i])
    {
         
        printf("not palindrome") ;
        flag=1;
        break;
    }
    
   }
    if(flag==0)
    {
        printf("palindrome");
    }
}