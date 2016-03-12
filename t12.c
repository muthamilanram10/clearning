#include<stdio.h>

int h=88;
main()
{
 i++;
 func();
printf("value of i=%d --main function()\n",i);
}
func()
{
int h=98;
i++;
printf("value of i=%d --func() function\n",i);
}