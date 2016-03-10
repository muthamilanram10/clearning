#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
int sum,sub,mul,rem;
float div;
clrscr();
printf("Enter values of b,c,d:");
printf("%d%d%d",&b,&c,&d:");
sum=b+c;
sub=b-c;
mul=b*c;
rem=b%d;
a=b/d*d;
printf("\n sum=%d,sub= %d,mul= %d,div= %f",sum,sub,mul,div);
printf("\n remainder of division of b & d is %d",rem);
printf("\n a= %d",a);
getch();
}


