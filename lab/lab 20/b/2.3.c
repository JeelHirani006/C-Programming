#include"stdio.h"
void main()
{   
     int i,j,sum=0,flag=0,sum1=0;
    char a[100];
    printf("enter a string a");
    gets(a);
    printf("enter a string b");
    char b[100];
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
    }
    for(j=0;b[j]!='\0';j++)
    {

    }
    if(i>=j)
   { 
    for(i=0;a[i]!='\0';i++)
     {  
        if(a[i]!=b[i])
        {
            
             flag=1;
              break;
        }
     }
   }
   else
   {
          for(i=0;b[i]!='\0';i++)
     {  
        if(a[i]!=b[i])
        {
           flag=1;
           break;
        }
     }
   }
   if(flag==0)
   {
    printf("0");
   }
   else
   {
    for(i=0;a[i]!='\0';i++)
    {
        sum=sum+a[i];
    }
    for(i=0;b[i]!='\0';i++)
    {
       sum1=sum1+b[i];
    }
    if(sum>sum1)
    {
        printf("1");
    }
      else
      {
        printf("-1");
      }
   }
}