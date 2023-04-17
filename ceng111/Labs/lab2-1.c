#include <stdio.h>
#include <stdlib.h>



int main() {
	int num_a;
	double num_b;
	
	printf("Enter an integer:");
	scanf("%d",&num_a);
	printf("5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+\n");
	printf("%10d\n\n",num_a);
	
	printf("Enter an real:");
	scanf("%lf",&num_b);
	printf("5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+\n");
	printf("%10.4f\n\n",num_a);
	
	printf("Enter an real:");
	scanf("%lf",&num_b);
	printf("5 10 15 20 25 30 35 40\n");
	printf("-+-+-+-+-+-+-+\n");
	printf("%15.8e\n\n",num_a);
	
	return 0;
}
