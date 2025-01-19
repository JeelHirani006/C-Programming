 #include "stdio.h"
 #include"math.h"
void main ()
{
    int i,size,n;
    printf("enter a size");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
          printf("enter a value ");
          scanf("%d",&a[i]);
    }
    printf("enter value of n");
    scanf("%d",&n);
    int sum=0;
    for(i=0;i<n;i++)
    {
         sum=sum+a[i];
    }
    float avg=sum/n;
    printf("avg=%f ",avg);
    float gm;
    float multi=1;
     for(i=0;i<n;i++)
     {
        multi=multi*a[i];
     }
     gm=pow(multi,1.0/n);
     printf("gm=%f ",gm);
     float hm;
     float add=0;
     for(i=0;i<n;i++)
    {
        (add)=(add)+(1.0/a[i]);
    }
    hm=n/add;
    printf("hm=%f",hm);
}