#include <stdio.h>

struct stu_info        
{        
char name[20];
char section[6];
int rollno;
float CA;
}s2= {"Karan", "K21PD", 02, 24.5};   

int main()
{
      struct  stu_info s1= {"Ajay", "K21PD", 12, 23.3};
        
        printf("\nSize of struct = %d", sizeof(stu_info));
        
        
}
