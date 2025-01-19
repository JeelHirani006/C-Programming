#include"stdio.h"
void main()
{
    char a[100],b[100],c[100];
    gets(a);
    int i,j=0,k=0;
    for (i=0;a[i]!='\0';i++)
    {
          if(('A'<=a[i]&&a[i]<='Z')||('a'<=a[i]&&a[i]<='z'))
          {
             b[j]=a[i]; 
             j++;
          }    
          else if(a[i]!=' ')
          {
               c[k]=a[i];
               k++;
          }
    }
    b[j]='\0';
    c[k]='\0';
    puts(b);
    puts(c);
}