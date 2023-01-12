#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { 
	int n,t,p=1,o=2;
	double x,sum=0;

	printf("Enter an integr");
	 scanf("%d",&n);
	 
	printf("Enter an reel sayo");
	 scanf("%lf",&x); 
	
	t=2*n;
	
	while((p<=(2*t-1)) && (n<=t) && (o<=t)){
		sum=sum+(p/(pow(x,o)));
		p=p+2;
		o=o+2;
	 }
	 
	 printf("%lf",sum);
	return 0;
}
