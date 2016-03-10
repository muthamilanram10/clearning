#include<stdio.h>
void main()
{
int sno.,m1,m2,m3;
char name[20];
float total,avg;
printf(" enter the sno.,sname,3 sub marks");
scanf("%d%s%d%d%d",&sno.,name,&m1,&m2,&m3);
total=m1+m2+m3;
avg=total/3;
printf("sno.....%d",sno.);
printf("name....%s",name);
printf("marks......%d\t%d\t%d",m1,m2,m3);
printf("total.......%f",avg);
}

