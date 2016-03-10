#include<stdio.h>
#include<string.h>

typedef enum MONTHS mh
{
 jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec;
}MONTHS;
void main()
{
 MONTHS mh;
mh=jul;
printf("%d",mh);
getch();
}