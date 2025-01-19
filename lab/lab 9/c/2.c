#include"stdio.h"
void main ()
{
  int a,i=0,temp=0,temp1=0,ans=0,counter=0,flag=0;
  printf("enter a numbe");
  scanf("%d",&a);
  while(a!=0)
  {
      temp1=a%2;
      temp=temp+temp1;
      a=a/2;
      temp=temp*10;
      if(temp==0&&flag==0)
      {counter++;}
      else
      {
        flag=1;
      }
      
  }//printf("%d\n",temp);
   temp=temp/10;  
  temp1=0;
  
  while(temp!=0)
  {
    temp1=temp%10;
    ans=ans+temp1;
    ans=ans*10;
    temp=temp/10;
  
  }
   
  ans=ans/10;
  for(i=0;i<counter;i++)
  {
    ans=ans*10;
  }
  printf("%d",ans);
}