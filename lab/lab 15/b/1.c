#include"stdio.h"
void main ()//error
{ 
    int i,size,j,count=0,temp,count1=0,temp2,temp3;
  printf("enter a size");
  scanf("%d",&size);
   int a[size];
   int b[size];
   for(i=0;i<size;i++)
   {
          printf("enter a value");
          scanf("%d",&a[i]);
   }
   for(i=0;i<size;i++)
   {
      b[i]=a[i];
   }
   for(i=0;i<size;i++)
   {
    for(j=0;j<size;j++)
    {
        if(a[i]==b[j])
        {
            count++;
        }
        temp2=a[size-1];
        if(count>1&&j!=(size-1))
        {  size=size-1;
            for(temp=j;temp<size-1;temp++)
            {a[temp]=a[temp+1];} 
         a[size-1]=temp2;
            count=1; 
        }
    }
    count=0;
   }
      for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }

}
