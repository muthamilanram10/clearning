#include<stdio.h>
struct student
{
int regno;
char name[20];
int age;
char gender[20];
};
void main()
{
 struct student s1;
 printf("regno:");
 scanf("%d",&s1.regno);
 printf("name\n");
 scanf("%s",&s1.name);
 printf("age");
 scanf("%d",&s1.age);
 printf("gender\n");
 scanf("%s"&s1.gender);
 }