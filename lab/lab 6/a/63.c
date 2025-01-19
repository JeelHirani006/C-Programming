#include"stdio.h"
void main()
{
    char a;
    printf("enter value");
    scanf("%c",&a);

    if(a>='A' && a<='Z'){
        printf("upper case");
    }
    else{
        printf("Lower Case");
    }
}