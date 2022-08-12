#include<stdio.h>
  int main()
    {
    	int x,n;
    	int y=1;
    	printf("enter the number");
    	scanf("%d",&x);
    	printf("enter any number(2 to 9) to check wether enterd number is prime or not");
    	scanf("%d",&n);
    	for(y=1;x%y==0 && x%x==0 && x%n!=0;x++)
    	{
    		printf("number is prime %d \n",x);
    		break ;
		}
		for(y=1;x%y==0 && x%x==0 && x%n==0;x++)
		{
		printf("number is not a prime number %d \n",x);
    		break ;	
		}
					return 0;
	}
