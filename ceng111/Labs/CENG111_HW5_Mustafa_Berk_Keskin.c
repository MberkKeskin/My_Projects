#include <stdio.h>
#include <stdlib.h>

/* Name:Mustafa Berk
	Surnamw: Keskin
	STD NO:202211042
 */

int main() {
	int std_num,grade,max_grade,max_stdnum,min_grade,min_stdnum,counter=1,counter_student=1; 
	//counter= first declaration of max and min variabless
	
	while(std_num>=0){
		printf("Enter the student İD:");
		scanf("%d",&std_num);
		
		if(std_num>=0){
		printf("Enter the grade:(Range is 0-100)");
		scanf("%d",&grade); 
		
		}
		
		if(counter==1){
			max_grade=grade;
			max_stdnum=std_num;
			min_grade=grade;
			min_stdnum=std_num;
			counter++;
		} 
		
		if(grade>max_grade){
			max_grade=grade;
			max_stdnum=std_num;
		} 
		
		if(min_grade>grade){
			min_grade=grade;
			min_stdnum=std_num;
		}
		
		
	}
	
	printf("Student id : %d has the max grade: %d\n", max_stdnum,max_grade);
	printf("Student id : %d has the min grade: %d", min_stdnum,min_grade);
	return 0;
}
