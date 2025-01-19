#include"stdio.h"
void main ()
{
    int a[3][3]={{5,10,15},{20,25,30},{35,40,45}};
    
    printf("%02d ",**(a));
    printf("%2d ",*(*(a)+1));
    printf("%2d \n",*(*(a)+2));
    printf("%2d ",**(a+1));
    printf("%2d ",*(*(a+1)+1));
    printf("%2d\n",*(*(a+1)+2));
    printf("%2d ",**(a+2));
    printf("%2d ",*(*(a+2)+1));
    printf("%2d ",*(*(a+2)+2));
}