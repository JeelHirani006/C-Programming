#include"stdio.h"
union collage
{
     char name[10];//max mamory badha ne alocate thay ans==>max size
     float fee;   //in array ma max size  ne jam structure ma hoy tem size allocate thay
     int std;    // max size==>(in array)4*3
};
struct  school
{
    char name[10];  //theory ===>addition
     float fee;    //large size na multiplication ma(requird memory sudhi ) 
     int std;    
};
void main ()
{
 union collage a;
 struct school b;
 int ans=sizeof(a);
 printf ("%d\n",ans);
 ans=sizeof(b);
 printf ("%d\n",ans);
}