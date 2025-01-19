#include"stdio.h"
void main()
{
    int size,i,max;  
    printf ("enter a size"); 
    scanf("%d",&size);
    int a[size];        // size compile thay tyarej apva ma ave 
    for(i=0;i<size;i++) //pan a compiler provide kare chee technicaly khotu chee
    { 
        printf("enter number ");
       scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<size;i++)
    {
        if(max<a[i])
        {
           max=a[i];
        }
    }
    printf("max=%d",max);
}
