#include"stdio.h"
#include"string.h"   
struct book        // imagin like object
{
    char name[100];
    float prize;   // blue print 
    int page;
};
void main()
{
  struct book a;   // type 
  strcpy(a.name,"mahabharat");  //pointer 
  a.prize=135;                     
  a.page=100;
  printf("%f \n",a.prize);   
  printf("%s \n",a.name);
  printf("%d",a.page);  
}