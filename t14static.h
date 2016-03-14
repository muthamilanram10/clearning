#include<stdio.h>
void func()
{
static int x=0;
x++;
printf("x=%d",x);
}
void main()
{
 func();
 func();
 func();
func();
}