#include <stdio.h>
#include<string.h>

struct stu_info
{
char name[20];
char section[6];
int rollno;
int CA;
};

int main()
{
        struct stu_info s1,s3;

printf("\nEnter the details of student:");
printf("\n Enter your name: ");
gets(s3.name);
printf("\n Enter your Section: ");
gets(s3.section);
printf("\n Enter your Roll No: ");
scanf("%d", &s3.rollno);
printf("\n Enter your CA marks: ");
scanf("%d", &s3.CA);

s1=s3;

printf("\n\n Name = %s", s1.name);
printf("\n Section = %s", s1.section);
printf("\n Roll NO: = %d", s1.rollno);
printf("\n CA = %d", s1.CA);


}


