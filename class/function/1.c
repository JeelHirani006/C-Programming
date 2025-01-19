#include "stdio.h" 
int max(int,int);               //declar (function ne function call kem karvu 
                              // function ni info campilar ne ape   
void main ()                   
{ int a,b,ans;
    printf("enter a value");
    scanf("%d %d",&a,&b);
   ans=max(a,b);     //<~~~~a rete deta function ma api saky     // function call
   printf("%d",ans);
} 
  int max (int x,int y) //<~~~int x ma int deta type deta send kare main mathi teno 
    // defination      // x ane y te deta store karva nava veriable define karva pade
   //^~~ jyare value return karavi hoy tyarno deta type baki void
{
   if (x<y)
   {
     return y;  //<~~~return value send kare main   
   }
     else
    {
     return x;    //main ma print chee
}
