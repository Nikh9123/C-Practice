#include<stdio.h>
  int main()
    {
    	int a[100],i,n ;
    	printf("enter number of elements:");
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
		}
		for(i=0;i<=n;i++)
		{
			printf("a[%d]=%d",a[i]);
		}
    	
    	return 0 ;
    	
	}
