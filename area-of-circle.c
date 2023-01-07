//to calculate area of a circle//
#include<stdio.h>
int main ()
{
	float pi=3.14, area;
	int r;
	printf("enter radius of circle:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle is; %f",area);
	return 0;
}
