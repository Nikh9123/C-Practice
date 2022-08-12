#include<stdio.h>
  int main()
  {
  	int r ;
  	float area,diameter ;
  	printf("enter the radius");
  	scanf("%d",&r);
  	if(r>30)
  	printf("area of a circle is=%f",area=3.14*r*r);
  	else if(r<30)
  	printf("diameter is=%f",diameter=2*3.14*r );
  	else
  	printf("invalid input");
  	return 0 ;  
  }
