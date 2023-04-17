#include <stdio.h>
#include <stdlib.h>



int main() { 
	int x,y;
	printf("enter two numbers:");
	scanf("%d %d",&x,&y);
	printf("The sum is:%d \n",(x+y));
	printf("The diffrence is:%d\n",(x-y));
	printf("the prodcut is: %d\n",(x*y));
	printf("the quoite is:%d\n",(x/y));
	printf("the modulus is:%d\n",(x%y));
	system("PAUSE");
	
	return 0;
}
