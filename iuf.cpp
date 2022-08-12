#include<stdio.h>
int main()
{
    int var1 = 60, var2 = 70;
    int *const ptr = &var1;
    printf("\n%d",*ptr);
    ptr = &var2; //Invalid-Error will arise
    printf("%d\n", *ptr);
    return 0;
}

