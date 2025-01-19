#include"stdio.h"
void main ()
{
    FILE*p;
    char a;
    int countline=1,countspace=0,counttab=0,countch=0;
    p=fopen("jeel.txt","r");
    while(fscanf(p,"%c",&a)!=EOF)
{
        if(a=='\n')
    {
      countline++;  
    }
     else if (a==' ')
    {
       countspace++;
    }
    else if (a=='\t')
    {
        counttab++;
    }
    else if('A'<=a<='Z'||'a'<=a<='z')
    {
        countch++;
    }
    
}    
    fclose(p);
    printf("line=>%d,space=>%d,tab=>%d,ch=>%d,",countline,countspace,counttab,countch);
}