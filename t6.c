#include<stdio.h>
void main()
{
 int tamil=66;
 int *ip;
 ip=&tamil;
 printf("address of tamil: \n%u",&tamil);
 printf("address of ip:\n%u",ip);
 printf("value of *ip:\n%d",*ip);
 return;
}
