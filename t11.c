#include<stdio.h>
void main()
{
int a[20],i,j,t;
printf("enter 5 nos.\n\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]>a[j])
{
 t=a[i];
 a[i]=a[j];
 a[j]=t;
}
}
}
printf("mini and max nos:\n\n");
for(j=0;j<5;j++)
printf("\n%d",a[j]);
}