#include <stdio.h>
#include <stdlib.h>


int main() { 
	int *p,var=5;\\
	
	p=&var; 
	
	printf("val of var bu using var is %d\n",var);
	printf("val of var by using poniter is %d\n",*p);
	printf("adress of var by using var is %p\n",&var);
	printf("adress of var by using pointer is %p\n",p);
	printf("value of p is %p\n",p);
	printf("adress of p is %p\n",&p);
	

	
	
	return 0;
} 


void digit(int *p1,int *p2,int *p3,int *p4,int *p5){
	int number=*p5;
	
	*p4=number%10;
	number=number/10;
	
	*p3=number%10;
	number=number/10;
	
	*p2=number%10;
	
	*p1=number/10;
	
}
int main() {  
	int value,first,second,third,fourt; 
	
	printf("enter the 4 value number:");
	scanf("%d",&value);
	
	digit(&first,&second,&third,&fourt,&value);
	
	printf("first and second is %d %d\n",first,second);
	printf("third and fourth is %d %d\n",third,fourt);
	
	
	return 0; 
} 



