#include<stdio.h>

struct student
{
 int rollno;
 char name[20];
 int percentage;
}student;
void main()
{
 student rollno=1;
 strcpy(student.name,"tamil");
 student.percentage=92;
 printf("rollno=%d",student.rollno);
 printf("name=%s",student.name);
 printf("percentage=%d",student.percentage);
 }