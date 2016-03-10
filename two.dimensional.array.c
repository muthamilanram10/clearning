#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,arr[3][4];
clrscr();
for(i=0;i<3;i++)
for(j=0;j<4;j++)
arr[i][j]=(i*4)+j+1;
printf("printing the array contents : \n");
for(i=0;i<3;i++)
{
for(j=0;j=4;j++)
printf"%3d",arr[i][j]);
printf("\n");
}
getch();
}