#include<stdio.h>
  int main()
  {
  	int maths,phy,chem,marks ;
  	int total ;
  	printf("enter marks in each subject one by one");
  	scanf("%d%d%d",&maths,&phy,&chem);
  	total = (maths+phy+chem)/3;
  	if(total>40)
  	{
  		if(phy>33 && maths>33 && chem>33)
  		printf(" you r passed in every subject properly");
  		else 
  		printf("sorry u r not pass");
	  }
	  else
	  printf("try next time");
	  return 0;
  }
