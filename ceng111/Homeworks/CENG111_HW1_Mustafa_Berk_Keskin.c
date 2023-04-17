#include <stdio.h>
#include <stdlib.h>

int main() { 
	int spend_time,total_charge=0,car_charge=2,bus_charge=3,truck_charge=4;
	char vehicle;
	

	 printf("Welcome to Park calculate charge porgram(C-c for car, B-b for bus, T-t for truck)\n");
	 printf("Enter the type of vehicle:");
	 scanf(" %c" ,&vehicle);
	
	 if((vehicle=='c') || (vehicle=='C')){
		printf("Car is 2 tl per hour.\n");
		printf("Enter the time(hour):");
		scanf("%d",&spend_time);
		total_charge=spend_time*car_charge;
		printf("Your charge is %d\n",total_charge);
	} 
	
  	else if ((vehicle=='b') || (vehicle=='B')){
		printf("Bus is 3 tl per hour \n");
		printf("Enter the time(hour):");
		scanf("%d",&spend_time);
		total_charge=spend_time*bus_charge;
		printf("Your charge is %d\n",total_charge);
 	} 
	 
  	else if((vehicle=='t') || (vehicle=='T')){
		printf("Truck is 4 tl per hour\n");
		printf("Enter the time(hour):");
		scanf("%d",&spend_time);
		total_charge=spend_time*truck_charge;
		printf("Your charge is %d\n",total_charge);
 	} 
 	 	 	
 	return 0;
}
	
