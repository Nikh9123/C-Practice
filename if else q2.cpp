#include<stdio.h>
  int main()
  {
      int income ;
      float tax ;
      printf("enter your income: ");
      scanf("%d",&income);
      if(income<250000)
      {
          printf("no taxes for u ");
      }
      else if(income>250000 && income<500000)
      {
          tax=income*0.05;
      }
      else if(income>500000 && income<1000000)
      {
          tax=income*0.1 ;
      }
      else if(income>1000000)
      {
          tax=income*0.3;
      }
      printf("\nyour payable Tax is = %.2f",tax);
      return 0 ;
  }
