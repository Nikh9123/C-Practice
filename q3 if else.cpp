#include<stdio.h>
 int main()
 {
 	int year ;
 	int days ;
 	printf("enter a year to check whether it is a leap year or not : ");
 	scanf("%d",&year);
 	printf("enter the number of days in february");
 	scanf("%d",&days);
 	if(year%4==0)
 	{
 		if(days>28 && days<30)
 		printf("it is a leap year");
	 }
	 else
	 printf("entered year is a common year");
	 return 0 ;
 }
