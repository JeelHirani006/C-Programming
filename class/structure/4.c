#include"stdio.h"
struct student
{
  char name[100];
  int rollno;
};
void main ()
{   int i;
    struct student a[2];
   for(i=0;i<2;i++)
   {
    printf(" enter a student detail %d\n",i+1);
    printf(" enter a name");
    scanf("%s",&a[i].name);
    printf("enter a roll no");
    scanf("%d",&a[i].rollno);
   }
   for(i=0;i<2;i++)
   {
         printf("name=>%s\n",a[i].name);
         printf("roll no=>%d\n",a[i].rollno);
   }
}