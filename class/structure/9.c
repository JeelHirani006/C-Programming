#include"stdio.h"
union student
{
    int rollno;
    int mark; // structure ma alag alag mamery allocate kare 
};

void main ()
{
    union student a;  //ek j adress par different deta type store thay                               
    a.rollno=15;       // large size deta type jetli size badha ne alocate kaare 
    printf("%d %d \n",a.rollno,a.mark); // at time ekj value badha ne male
    a.mark=30;                      
    printf("%d %d\n",a.rollno,a.mark);
    printf("%d %d",&a.rollno,&a.mark);// akha union nu adress same j hoy sne bsdha ne at time sam value male 
}                // imagen like same adress different name 