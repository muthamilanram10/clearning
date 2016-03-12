#include<stdio.h>
struct student
{
int regno;
char name[20];
int age;
char gender[20];
};
int main()
{
 int i;
 struct student s1,s2;
 for(i=0;i<2;i++)
{
 printf("regno:");
 scanf("%d",&s1.regno);
 printf("name\n");
 scanf("%s",&s1.name);
 printf("age");
 scanf("%d",&s1.age);
 printf("gender\n");
 scanf("%s"&s1.gender);
 }
 return 0;
}
