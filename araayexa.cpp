#include<stdio.h>
  int main()
  {
  	int a ;
  	int ar[40];
  	int ab[50]={12,92,32,43,22};
  	printf("%u\n%u\n%u\n%u\n%u\n%u",ab[4],&ab[1],&ab,ab,a,ar);
  	int n ;
  	printf("enter number of elements:");
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	printf("%u\n",&ab[i]);
  	return 0;
  }
