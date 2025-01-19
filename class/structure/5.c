#include"stdio.h"
struct student
{
     char name[100];
    int rollno;
};
void main ()
{
  struct student a;
  struct student *p;
  a.rollno=150;
  p=&a;
 printf("%d\n",p->rollno);
 printf("%d",p);

}