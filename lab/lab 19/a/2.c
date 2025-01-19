#include"stdio.h"
#include"string.h"
void main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    int ans;
    printf("enter a string 1");
    gets(str1);
    printf("enter a string 2");
    gets(str2);
    ans=strlen(str1);
    printf("%d\n",ans);
    ans=strcmp(str1,str2);
    printf("%d",ans);
    strcpy(str3,str1);
    strcpy(str4,str1);
    puts(str3);
    strcat(str1,str2);
    puts(str1);
    strrev(str2);
    puts(str2);
    strlwr(str3);
    puts(str3);
    strupr(str4);
    puts(str4);

}