#include <stdio.h>
#include <stdlib.h>



int main() {
	int fah,celc;
	
	printf("enter fah number for convert celcius:");
	scanf("%d",&fah);
	
	celc=(5*(fah-32))/9;
	
	printf("%d fah , Celcius equilent is: %d\n",fah,celc);
	return 0;
}
