#include <stdio.h>
#include <stdlib.h>


double funk (int x, char y){
	double b;
	
	if(y=='F'){
		b=((9*x)+32)/5;
	 } 
	 
	else if(y=='C'){
		b=(5*(x-180))/9;
	} 
	
	return b;
}

int main() {
	int s,f;
	char chooice;
	
	printf("Enter an operator:(C is for F to C, F is for C to F)");
	 scanf("%c",&chooice);
	 
	 printf("Enter a degree:");
	  scanf("%d",&s);
	  f=funk(s,chooice);
	  printf("%d",f);
	return 0;
}
