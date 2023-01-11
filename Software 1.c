#include <stdio.h>
#include <stdlib.h>

int funk1(int a){
	int x=2,a1,flag=1;
	while((flag==1) && (x!=a)){
		a1=a%x;
		x++;
		if(a1==0){
		 flag=0;
		} 
	 } 
	
	return flag;
} 

int funk2(int y,int z){
	int a1,n;
	z=2;
	while(z!=y){
		a1=y%z;
	    
	    if(a1==0){
	    	n=funk1(z);
	    	if(n==0){
	    		printf("%d is not prime multiplier of %d\n",z,y);
			} 
			else{
				printf("%d is prime multiplier of %d\n",z,y);
			}
		} 
		z++;
	} 
	
	return 1;
}

int main() { 
	int x,y,n,z;
	printf("Enter an integer:");
	scanf("%d",&x);
	 
	y=funk1(x);
	
	if(y==1){
		printf("it's prime number'");
	}
	
	else{ 
	 z=funk2(x,n);
	}
 
	return 0;
}
