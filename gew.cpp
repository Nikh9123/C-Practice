#include<stdio.h>
int main()
{
	int n,a[10],i,max,min;
	printf("\n Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
	if(a[i]<min)
	{
	min=a[i];
	}
	}
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("\nMaximum element is: %d",max);
printf("\nMinimum element is: %d",min);
return 0;
}

