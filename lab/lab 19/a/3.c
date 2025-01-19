#include"stdio.h"
int find(char ,char t[]);
void main()
{
      char a,b[100];
      int ans;
      printf("enter a string");
      gets(b);
      printf("enter a charecter");
      scanf("%c",&a);
     ans=find(a,b);
     printf("\n %d",ans);
}
int find(char x,char t[])
{     int i;
      int count=0;
    for(i=0;t[i]!='\0';i++)
    {
         if(x==t[i])
         {
           count++;
           printf("b[%d]",i);
         }  
    }

    return count;
}