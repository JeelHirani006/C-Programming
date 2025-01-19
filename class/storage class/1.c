#include"stdio.h"
void fun();
void main ()
{
    fun();
    fun();                // auto life time {} nae use {}
    fun();               // static no life time program end na thay tya sudhi ane use {}
}
void fun()
{                                                     
    int a=5;        // static ma program end na thay tya sudhi life time hoy mate  
    static int b=5;   // <~~~ (2 time a staement egnor thay )old value hoy em j rye
    a++;                              // old value ma j modification thay 
    b++;
    printf("a=%d b=%d ",a,b);   // a ni var bracket puro thay distroy thay jay 
}                              // fari thi function call thay navo ver create thay 