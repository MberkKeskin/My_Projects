#include <stdio.h>
#include <stdlib.h>



int main() {
	int value1,value2,temp;
	
	printf("Enter num 1 and num 2 for swap:");
	scanf("%d",&value1);
	scanf("%d",&value2);
	printf("the original numbers are %d %d\n",value1,value2);
	temp=value1;
	value1=value2;
	value2=temp;
	
	printf("swap is %d %d",value1,value2);
	
	return 0;
}
