#include<stdio.h>
int main()
{
int i=0;
 while(1) // 1 means condition is always true
 {
 i++;
 if(i==2)
 continue;
 else if(i==5)
 break;
 printf("%d ",i);
 }
return 0;
}


