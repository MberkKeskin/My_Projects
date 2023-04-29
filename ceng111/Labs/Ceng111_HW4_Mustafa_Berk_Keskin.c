#include <stdio.h>
#include <stdlib.h>


/*Name:Mustafa Berk 
Surname:Keskin
Std no:202211042
*/

int main() {
	char value=' ';
	int counter_vowel=0,counter_characters=0,counter_UpperLetter=0,counter_LowerLetter=0,counter_sentence=1;
	
	printf("Plese enter a sentence charthcer by chartcher:");
	

	while(value!='.'){
		
		scanf("%c",&value);
		
		
		if((value=='a') || (value=='e') || (value=='i') || (value=='o') || (value=='u') || (value=='A') || (value=='E') || (value=='Ý') || (value=='O') || (value=='U')){
			counter_vowel++;
			
		} 
		
	    if((value>= 65) && (value<=90)){
			counter_UpperLetter++;
			counter_characters++;
		}
		
		else if((value>= 97) && (value<=122)){
			counter_LowerLetter++;
		    counter_characters++;
			
		} 
		
		
		if((value==' ') && (value!='.')) {
			counter_sentence++;
			
			
		}
		
	} 
	
	
	printf("Total Lower case letter number is: %d \n",counter_LowerLetter);
	printf("Total Upper case letter number is: %d \n",counter_UpperLetter);
	printf("Total vowel letter number is: %d \n",counter_vowel);
	printf("Total SENTENCE number is: %d \n",counter_sentence);
	printf("Total character number is: %d \n",counter_characters);
	
	
	return 0;
}
