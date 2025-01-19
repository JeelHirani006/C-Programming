#include "stdio.h"
void main()
{
    char a[10];
    printf("entera value ");
    gets(a);
    char*p;
    p=a;    //p==>abc na a(a[0]) nu aadress
    printf("%s",p+1); // %s chee etle akhi string nu adress print kavu pade je sakya nathi
                     // etle a[0] ni value print kare %s  hovathi pacahd na element eni 
                    //rite print thay
}