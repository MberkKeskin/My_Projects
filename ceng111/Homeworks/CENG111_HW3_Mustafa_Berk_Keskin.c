#include <stdio.h>
#include <stdlib.h>



int main() {
	int value1,value2,sum_odd=0,sum_even=0,i;
	
	printf("Please enter lower and upper limit:");
	scanf("%d",&value1);
	scanf("%d",&value2);
	
	i=value1; // i is for keep value1 value 

	for(value1;value1<=value2;value1++){
		
		if(value1%2==0){
			sum_even=sum_even+value1;
		} 
		
		else{
			sum_odd=sum_odd+value1;
		}
	} 
	
	printf("The sum of odd numbers between %d %d is: %d\n",i,value2,sum_odd);
	printf("The sum of even numbers between %d %d is: %d",i,value2,sum_even);
	return 0;
}
