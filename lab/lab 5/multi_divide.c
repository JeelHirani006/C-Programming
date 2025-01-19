#include "stdio.h"
void main ()
    {
    int a;
    printf("enter a value a=1 => addition");
    scanf("%d",&a);
    if (a==1)
        {
        int a,ans;
        printf("enter value for maltiplication");
        
         scanf("%d",&a);
         ans=a<<1;
        printf("a*2=%d",ans);
        }
        else 
        {
            int a,ans;
            printf("enter value for division");
        
         scanf("%d",&a);
            ans=a>>1;
        printf("a/2=%d",ans);
        }
    }
