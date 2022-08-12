
#include <stdio.h>
#include<stdlib.h>
struct stu_info // definition
{
char name[20];
char section[6];
int rollno;
int CA;
};
int main()
{
 struct stu_info s[42]; // array of structure
 // size of s = 36 * 42 = 1512 B
 int size;
 printf("\nSize of struct = %d", sizeof(s));
 printf("\n enter the number of records you want to store:");
 scanf("%d", &size);
 fflush(stdin);
 for(int i=0; i<size; i++)
 {
 fflush(stdin);
 printf("\nEnter the details of student %d:", i+1);
 printf("\n Enter your name: ");
 gets(s[i].name);
 printf("\n Enter your Section: ");
 gets(s[i].section);
 printf("\n Enter your Roll No: ");
 scanf("%d", &s[i].rollno);
 printf("\n Enter your CA marks: ");
 scanf("%d", &s[i].CA);
 }
 for(int i=0; i<size; i++)
 {
 printf("\n\n Name: %s", s[i].name);
 printf("\n Section: = %s",s[i].section);
 printf("\n Roll No: %d",s[i].rollno);
 printf("\n CA marks: %d",s[i].CA);
 }
}

