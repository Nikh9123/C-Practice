#include<stdio.h>
int main()
{
	int *ptr=NULL;
	int a=10;
	printf("%u",ptr);// 0 will be displayed
                  printf("%u",*ptr);//Invalid(Dereferencing), as ptr is NULL at this point.
	ptr=&a;
       printf("\n%d",*ptr);//Now it is allowed, as NULL pointer has starting pointing somewhere
	return 0;
}

