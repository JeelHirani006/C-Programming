#include"stdio.h"
void main ()
{ FILE *p;
  char a[100];
  char c;
  p=fopen("jeel2.txt","w");
  fprintf(p,"hiii");
  fclose(p);
  p=fopen("jeel2.txt","r");
  while (fscanf(p,"%s",&a)!=EOF)
   {
      
   }
   //printf("%s",&a);
   fputc(c,p);
//    rewind(p);
//    fputc(c,p);
 printf("%c",c);
 }