#include"stdio.h"
struct book
{
    float price;
    int page; 
};
void main ()
{
     struct book a;
     struct book *p;
     p=&a;
     scanf("%f",&p->price);
     printf("%f",p->price);
     scanf("%d",&p->page);
     printf("%d",p->page);

}