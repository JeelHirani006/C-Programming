#include"stdio.h"
struct employ
{
  char name[100];
  int age;
};
void main ()
{
  struct employ a;
  printf("enter a name ");
  scanf("%s",&a.name);
  printf("enter a age");
  scanf("%d",&a.age);
  printf("%s \n %d",a.name,a.age);
}