#include <stdio.h>
#include <stdlib.h>
#define conversion_rate 540000.0


int main() {
	int dolar;
	double tl;
	
	printf("Enter the dolar rate:");
	scanf("%d",&dolar);
	
	tl=dolar*conversion_rate;
	
	printf("Wow! %d DOLLAR MAKE %10.0lf Tl\n",dolar,tl);
	S
	
	return 0;
}
