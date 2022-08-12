#include <stdio.h>
int main()
{
int arr[10],i,n ;
printf("enter array elements up to:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter array elements %d",i+1);
	scanf("%d",&arr[i]);
}
printf("array elements are:");
for(i=0;i<n;i++)
{
	printf("\n arr[%d]",arr[i]);
}

return 0;
}

