#include"stdio.h"
struct dob
{
  int date;
  int month;
  int year;
};
struct student
{
   char name[100] ;
   struct dob b;
};

void main ()
{
   struct student a;
   printf("enter a name ");
   scanf("%s",&a.name); 
   printf("enter a date");
   scanf("%d",&a.b.date);
   printf("enter a month");
   scanf("%d",&a.b.month);
   printf("enter a year");
   scanf("%d",&a.b.year);
   printf("%s \n",a.name);
   printf("%d/%d/%d",a.b.date,a.b.month,a.b.year);

}