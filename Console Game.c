#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() { 
	int answer,quess,counterQ=0,counterQ2=0,min=1,max=100,choice,choiceN1;
	char choice1; 
	//choiceN1 is for asking quesiton choice for Number quessing  game 
	//counterQ is for quess counter,counterQ2 for question counter
	//choice1 for number guessing game,
	printf("*****Welcome to Space Track Platform******\n");
	printf("1.Play the Number Guessing Game\n");
	printf("2.Play the Dice Game\n");
	printf("3.Exit\n");
	
	

	
		int flag=1;
		while(flag){ 
		printf("Please enter a chooice(1,2,3):");
	      scanf("%d",&choice);
		switch(choice){
			case 1: 
				printf("*****Welcome to Number Guessing Game******\n"); 
					//this srand and rand function gives user a random number. 
				srand(time(0));
				answer=(rand() % max) + min;
				   
				  
				     while(quess!=answer){ 
						printf("Make guess or Ask a question (Input M or A):");
				          scanf("%c",&choice1);
				           scanf("%c",&choice1); 
				    //complier take not value for one scanf, sollution is 2 scanf(for me) :))
					
					switch(choice1){ 
					//start of Making quess lines
						case 'M': 
				  		 if(counterQ<10){
						   printf("Make your best guess for the number between 1-100 :");
				  		      scanf("%d",&quess);  
							  counterQ++; 
								if(quess>answer){
									printf("Quess is bigGer than answer\n");
								} 
								else if(quess<answer){
									printf("Quess is smaller than answer\n");
								} 
								else{
									printf("Congrats! You guessed the number correctly!!!!\n");
									printf("You have %d quesses and %d questions\n",counterQ,counterQ2);
								} 
						} 
						
						
						else{
							printf("Out of quesses!.\n");
							printf("You have failed!\n");
							printf("Answer is: %d!\n\n\n",answer); 
							quess=answer;
						} 
					
						break; 
						
				
					
						//start of answering question lines
				  		case 'A': 
				  			printf("Questions to ask:\n");
				  			printf("1.Is it even or odd?\n");
				  			printf("2.Is it >50?\n");
				  			scanf("%d",&choiceN1);
				  			counterQ2++; 
								switch(choiceN1){
				  					case 1:
				  						if((answer%2)==1){
				  							 printf("Number is odd\n"); 
				  							} 
										else{
										 printf("Number is even\n");
										} 
									break; 
									
									case 2: 
										if(answer>50){
											printf("Number is bigger than 50\n");
										} 
										
										else{ 
											printf("Number is smaller or equal the 50\n");
										}  
									break; 
						break; 
					
							}			
							
								  
				  
							   
				  			
					  } 
				
			
			}	  
				//end of Number Quessing game	
				break; 
		
				
			case 2: 
				printf("*****Welcome to Dice Game******"); 
				int roll1,roll2,roll3,roll4,counter=0,roll_counter=0,sumP1,sumP2,flag1=1;
				double sum1=0.0,sum2=0.0;
				//counter for dice number counter
				//roll1,roll2 for player 1 dice rolls, roll3,roll4 for player2 dice rolls 
				//sum1= player1 points ,sum2=player2 points 
				//sumP1 = player1 dice sum, sumP2= player2 dice number sum for each run
				 srand(time(NULL));
				 //srand gives random dice values for each run
				 while(flag1){ 
				 //start of player1
				    roll1=rand() % 6+1;
					roll2=rand() % 6+1;
				     printf("Throw the dice for player 1: %d %d\n",roll1,roll2);
				     counter++; 
					if((roll1-roll2==4) || (roll2-roll1==4)){ 
						while(roll1+roll2<=8){ 
							roll1=rand() % 6 +1;
							roll2=rand() % 6 +1; 
							printf("Throw the dice for player 1: %d %d\n",roll1,roll2);
						 	 counter++; 
						}
					} 
					
					else if((roll1==3) && (roll2==3)){
						while(roll_counter<3){
							roll1=rand() % 6+1;
							roll2=rand() % 6+1;
							printf("Throw the dice for player 1: %d %d\n",roll1,roll2); 
							sum1=sum1+((roll1+roll2)/2);
				             counter++;
				             roll_counter++;
						}
					} 
					
					else if((roll1==6) && (roll2==6)){ 
						while(roll_counter<3){
							roll1=rand() % 6+1;
							roll2=rand() % 6+1;
							 printf("Throw the dice for player 1: %d %d\n",roll1,roll2);
				            sum1=sum1+((roll1+roll2)/2);
							 counter++; 
				             roll_counter++;
						}
					} 
					
					else if(roll1==roll2){
					} 
					
					else{
						sum1=sum1+((roll1+roll2)/2);
					} 
				//end of player1
					
				//start of player2
				roll3=rand() % 6+1;
			    roll4=rand() % 6+1;
				printf("Throw the dice for player 2: %d %d\n",roll3,roll4);
				counter++; 
				
					if((roll3-roll4==4) || (roll3-roll4==4)){
						while(roll3+roll4<=8){
						     roll3=rand() % 6+1;
							 roll4=rand() % 6+1;
						 	printf("Throw the dice for player 2: %d %d\n",roll3,roll4);
						 	 counter++;
						}
					} 
					
					else if((roll3==3) && (roll4==3)){
						while(roll_counter<3){
							roll3=rand() % 6+1;
							roll4=rand() % 6+1;
						 	printf("Throw the dice for player 2: %d %d\n",roll3,roll4);
						 	sum2=sum2+((roll3+roll4)/2);
				         	 counter++;
				         	roll_counter++;
						}
					} 
					
					else if((roll3==6) && (roll4==6)){ 
						while(roll_counter<3){
							roll3=rand() % 6+1;
							roll4=rand() % 6+1;
							printf("Throw the dice for player 2: %d %d\n",roll3,roll4);
							sum2=sum2+((roll3+roll4)/2);
				             counter++;
				            roll_counter++;
						} 
					} 
					
					else if(roll3==roll4){
					}
					
					else{
						sum2=sum2+((roll3+roll4)/2);
					} 
				//end of player2	
					
			
			if((roll1+roll2)==2*(roll3+roll4)){
				flag1=0;
			} 
			else if((roll3+roll4)==2*(roll1+roll2)){
				flag1=0;
			}
	   }
			if(sum1<sum2){
				printf("Player2 is winner!\n");
				printf("Player1 is %lf points\t",sum1);
				printf("Player2 is %lf points\n",sum2);
				printf("Total of %d throws are performed.\n\n\n\n\n",counter);
			} 
			
			else if(sum1==sum2){
				printf("Nobody winns!");
				printf("Player1 is %lf points\t",sum1);
				printf("Player2 is %lf points\n",sum2);
				printf("Total of %d throws are performed.\n\n\n\n\n",counter);
			}
			
			else{
				printf("Player1 is winner!\n");
				printf("Player1 is %lf points\t",sum1);
				printf("Player2 is %lf points\n",sum2);
				printf("Total of %d throws are performed.\n\n\n\n\n\n",counter);
			}
				 
			  
			//end of Dice game	
			break;
	
			case 3:
				printf("Bye"); 
				flag=0;
				break;
		}
	}	
	return 0;
}
