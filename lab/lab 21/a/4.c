#include"stdio.h"
struct student
{
    char name[100];
    float persantage;
    float age;
};
void main ()
{  int i;
    struct student a[5];
    for(i=0;i<5;i++)
    {
        printf("enter a name");
        scanf("%s",&a[i].name);
        printf("enter a persantage ");
        scanf("%f",&a[i].persantage);
        printf("enter a age ");
        scanf("%f",&a[i].age);
    }
        for(i=0;i<5;i++)
    {
        
        printf("%s\n",a[i].name);
        printf("%f\n",a[i].persantage);
        printf("%f\n",a[i].age);
    }

    
}