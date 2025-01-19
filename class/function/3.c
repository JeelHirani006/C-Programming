#include "stdio.h"
int add(int b[],int);
void main()
{
  int i,ans,size;
  printf("enter a size");
  scanf("%d",&size);
  int a[size];
  for(i=0;i<size;i++)   // arry ++>array ane tenu adress
  {
     printf("enter a value ");
     scanf("%d",&a[i]);
  }
 ans=add(a,size);   // array ne argument ma tenu adress mokalu pade  
 printf("%d",ans);         //a[]&b[] ekaj aress na alag alag nam chee
}                       // array hamsa tena base adress thi refar thay 
 int add(int b[],int siz) // base adress(a) avi rete darshavay
{         // ^~~~array nu adress hoy to defination ma pan array j ave         
    int i,sum=0;
     for(i=0;i<siz;i++)   // array ma adress same name  alag alg
     {                    // siz ma value same adress alag alg             
         sum=sum+b[i];
     }    
     
     return sum;
}

