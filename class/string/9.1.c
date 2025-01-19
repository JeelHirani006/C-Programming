#include"stdio.h"
#include"string.h"
void main ()
{
    char s1[100];
    char s2[100];
    printf("enter a value");
    gets(s1);
    printf("enter b value");
    gets(s2);
   strcat(s1,s2);
   puts(s1);

}