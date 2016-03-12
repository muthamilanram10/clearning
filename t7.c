#include<stdio.h>
#include<string.h>
void main()
{
int i;
char *arr[4] = {"lion","tiger","elephant","snake"};
char *(*ptr)[4] = &arr;
for(i=0;i<4;i++)
printf("String %d : %s\n",i*1,(*ptr)[i]);
return 0;
}