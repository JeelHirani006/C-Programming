#include"stdio.h"
#include"string.h"
struct bdate
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[100];
    int rollno ;
    struct bdate x;     
};
void main ()
{
    struct student a;
    strcpy(a.name,"xyz");
    a.rollno=1;
    a.x.day=15;
    a.x.month=8;
    a.x.year=1947;
    printf("%d/%d/%d",a.x.day,a.x.month,a.x.year);
}