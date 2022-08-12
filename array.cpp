#include<stdio.h>
int main()
{
int a[5]={11,22,33,44,55};
a[2]=a[1];
a[3]=a[2];
a[4]=a[3];
printf("%d",a[4]);
return 0;
}

