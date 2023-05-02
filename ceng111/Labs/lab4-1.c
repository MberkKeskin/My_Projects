#include <stdio.h>
#include <stdlib.h>



int main() {
	int value,num,fack=1,flag=2;
	
	printf("What do you want ?(1:find factroial,0:exit)");
	scanf("%d",&num);
	
	while(num!=0){
		printf("enter a value");
		scanf("%d",&value);
		if(value==0){
			printf("zero factorial is %d\n",fack);
			flag=1;
		} 
		
		while(value!=0){
			fack=value*fack;
			value--;
			
		} 
		
		if(flag!=1){
			printf("the fackorial is %d\n",fack);
		}
		
			printf("What do you want ?(1:find factroial,0:exit)");
	          scanf("%d",&num);
	          flag=2;
	          fack=1;
		
	} 
	
	if(num==0){
		printf("goodbye");
	}
	return 0;
}
