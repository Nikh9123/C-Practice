#include <stdio.h>
void show(int a[],int n);
void input(int b[],int n);
int main()
{
 int arr[100];
 int size,i,val ;
 printf("enter the total number of elements u want:");
 scanf("%d",&size);
 input(arr,size);
 show(arr,size);
 printf("\n enter the element u want to search:");
 scanf("%d",&val);
 for(i=0;i<size;i++)
 {
 	if(val==arr[i])
 	{
 		printf("\n element found at  =%d",i);
 		break ;
	 }
 }
}
void input(int b[],int n)
{
printf("enter array elemets:");
for(int i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
}
void show(int a[],int n)
{
	printf("array elements are:");
	for(int i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
