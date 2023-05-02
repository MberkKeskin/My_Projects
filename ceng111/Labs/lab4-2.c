#include <stdio.h>
#include <stdlib.h>


int main() { 
	int value=157,counter_five=0,counter_six=0;
	
	while((157<=value) && (value<=179)){
		if(value%5==0){
			counter_five++;
			printf("%d is divisible 5\n",value);
		} 
		
		if(value%6==0){
			counter_six++;
			printf("%d is divisible 6\n",value);
		} 
		
		value++;
	} 
	
	
	
	return 0;
}
