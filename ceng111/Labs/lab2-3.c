#include <stdio.h>
#include <stdlib.h>



int main() {
	float pi=3.1415926;
	double area,radius;
	printf("Enter the radius:");
	scanf("%lf",&radius);
	area=radius*radius*pi;
	
	printf("Radius is %4.2lf and area of the circle is:%8.5lf",radius,area);
	
	return 0;
}
