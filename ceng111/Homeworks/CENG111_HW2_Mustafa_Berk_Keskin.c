#include <stdio.h>
#include <stdlib.h>



int main() {
	int project_cost,total_charge,project_number;
	char project_type;
	
	printf("Enter the project type(S-s for small, M-m for medium, L-l for large) and number of project:");
	scanf("%c %d",&project_type,&project_number);
	
	if((project_type =='S') || (project_type =='s')){
		if(project_number<3){
			total_charge=1500*project_number;
			printf("Cost is %d dolar",total_charge);
		}
		else if((3<=project_number) && (project_number<=5)){
			total_charge=1000*project_number;
			printf("Cost is %d dolar",total_charge);
		}
		else if(5<project_number){
			total_charge=750*project_number;
			printf("Cost is %d dolar",total_charge);
		}
	} 
		
	else if((project_type =='M') || (project_type =='m')){
		if(project_number<3){
			total_charge=2500*project_number;
			printf("Cost is %d dolar",total_charge);
		} 
		else if((3<=project_number) && (project_number<=5)){
			total_charge=2000*project_number;
			printf("Cost is %d dolar",total_charge);
		} 
		else if(5<project_number){
			total_charge=1750*project_number;
			printf("Cost is %d dolar",total_charge);
		} 
	} 
	
	else if((project_type =='L') || (project_type =='l')){
		 
		if(project_number<3){
			total_charge=4500*project_number;
			printf("Cost is %d dolar",total_charge);
		 } 
		else if((3<=project_number) && (project_number<=5)){
			total_charge=4000*project_number;
			printf("Cost is %d dolar",total_charge);
		 }
		else if(5<project_number){
			total_charge=3500*project_number;
			printf("Cost is %d dolar",total_charge);
	 	}
	}
	 
	
	return 0;
}
