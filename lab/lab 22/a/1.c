#include"stdio.h"
void main ()
{   FILE *p;
    p=fopen("jeel.txt","r");
    char ch;
    fscanf(p,"%c",&ch);
    if(ch==EOF)
    {
        printf("file is empty");
    } 
    else
    {
        printf("file is not empty");
    }
    fclose(p);
}