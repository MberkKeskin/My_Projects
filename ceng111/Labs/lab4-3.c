#include <stdio.h>
#include <stdlib.h>


int main() {
	int value,counter=0,flag=1;
	
	printf("Enter the value");
	scanf("%d",&value);
	
	while(value>0){ 
		
		if(value%10==0){
			flag=2;
		}
		while(flag==2){
			value=value/10;
			counter++;
				
			 if(value!=0){
			 	flag=0;
			 }
		
		}
		
		while((flag=1) && (value%10!=0)){
			value=value/10;
		    counter++;
		 } 
		 
		 
		
		if(value==0){
			printf("digit number is %d\n",counter);
			counter=0;
			printf("Enter the value");
	        scanf("%d",&value);
			
		}	
	 } 
	
	
	
	return 0;
}
