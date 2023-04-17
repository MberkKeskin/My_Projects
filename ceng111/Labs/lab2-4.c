#include <stdio.h>
#include <stdlib.h>



int main() {
	char name[31];
	int grade1,grade2,grade3,sum=0;
	double average;
	
	printf("Enter name:\n");
	scanf("%s",name);
	
	printf("Enter the first grade:\n");
	scanf("%d",&grade1);
	
	sum=sum+grade1;
	
	printf("Enter the second grade:\n");
	scanf("%d",&grade2);
	
	sum=sum+grade2;
	
	printf("Enter the third grade:\n");
	scanf("%d",&grade3);
	
	sum=sum+grade3;
	printf("Name is: %s\n",name);
	printf("The average of grades is: %lf",(sum/3.0));
	return 0;
}
