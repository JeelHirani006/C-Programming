#include"stdio.h"
int  f(int*a,int);
void main ()
{
  int a,b;
  printf("enter a value of a");
  scanf("%d",&a);
  printf("enter a value of b");
  scanf("%d",&b);      // call by value & c all by refrence 
  f(&a,b);            // a nu adress pass thay pointer ma store thay e adress ma value change karu main ma change batave     
printf("a=%d ",a);   //  b ni value thi pass thay value nava veriable ma store thay  
printf("b=%d",b);   // b ma value change karu to main ma na batave alag alag adress chee 
                   //call by value ma  bey alag alg veriable chee 
}
int f(int *b,int t)
{
    *b=*b+1;
    t=t+1;       // at time function ekaj value return kare
                 // ek thi vadhu value return karva call by refrance no use karvo 
}
      
