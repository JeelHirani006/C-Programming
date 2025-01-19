#include"stdio.h"//book title, author, publication, and price.
struct book
{
    char booktitle[100];
    char auther[100];
    char publication[100];
    float price;

};
void main ()
{ int i;
  struct book a[3];
  for(i=0;i<3;i++)
  {
    printf("ente a value of book title ");
  scanf("%s",a[i].booktitle);
   printf("ente a value of auther ");
  scanf("%s",a[i].auther);
   printf("ente a value of publication ");
  scanf("%s",a[i].publication);
   printf("ente a value of book price ");
  scanf("%f",&a[i].price);
  printf("%s\n%s\n%s\n%f",a[i].booktitle,a[i].auther,a[i].publication,a[i].price); 
} 
   }


  
  