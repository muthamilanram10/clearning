#include<stdio.h>
int m=2;
void main()
{
 valuea();
 valueb();
 printf("in main m=%d",m);
 }
valuea()
{
 int i=400;
 printf("valuea() i=%d",i);
 return 0;
}
valueb()
{
 printf("valueb() m=%d",i);
return 0;
}