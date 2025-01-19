#include"stdio.h"
void main()
{   int i,j=0,temp;
    char a[100];
    gets(a);
   for(i=0;a[i]!='\0';i++)
   {
    if (a[i]==' ')
    {     temp=i;
       for(j=i;a[j+1]!='\0';j++)
       {
         a[i]=a[j+1];
         i++;
       }
       a[j]='\0';
       temp--;
       i=temp;
    }
    else if(33<=a[i]&&a[i]<=47||58<=a[i]&&a[i]<=64||91<=a[i]&&a[i]<=96||123<=a[i]&&a[i]<=126)
    {
          temp=i;
       for(j=i;a[j+1]!='\0';j++)
       {
         a[i]=a[j+1];
         i++;
       }
       a[j]='\0';
       temp--;     // <==a[1]=1 a[2]=/ a[3]=5 a[4]=6 (befor)
       i=temp;    // a[1]=1 a[2]=5 a[3]=6  (after)
                 //  i=temp for ==>i++ i=3 a[2]=>skip
                //   i=temp-1 for==>i++ i=2  recheck=>a[2] because value chang
    }
   }
  printf("%s",a);
}