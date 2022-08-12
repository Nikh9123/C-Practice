#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("\n Enter number of elements:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);//Reading array elements
	}
	printf("\n Entered array element''s address are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",&a[i]);//Printing array elements
	}
	return 0;
}

