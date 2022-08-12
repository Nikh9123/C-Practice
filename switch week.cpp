#include<stdio.h>
 int main()
   {
   int  num,i;
   int sum = 0;
   printf("enter any number");
   scanf("%d",&num);
   printf("enter till");
   scanf("%d",&i);
  for(num;num<=i;num++)
   {
   	sum=sum+num ;
   }
   printf("%d",sum);
   return 0;
}
