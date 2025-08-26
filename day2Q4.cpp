#include<stdio.h>
#include<math.h>
int main()
{
	float area ,r ,pi=3.14 ,circumference;
	printf("enter the radius ");
	scanf("%f" ,&r);
	
	printf("area of circle is ""%f \n" , pi*r*r);
	printf("circumference of circle is ""%f \n" , 2*pi*r);
	return 0; 
}
