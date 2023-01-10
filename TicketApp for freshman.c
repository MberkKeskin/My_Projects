#include <stdio.h>
#include <stdlib.h>

// The main function of this software
int printMainMenu (){
	int chooice;
	printf("\n---------------");
	printf("OPERATIONS:");
	printf("---------------\n");
	printf("1.Seat info\n");
	printf("2.Update price\n");
	printf("3.Sell a ticket\n");
	printf("4.Current cash info\n");
	printf("5.Quit\n");
	
	printf("Select your operations:");
	 scanf("%d",&chooice);
	
	return chooice;
} 

//Show seat numbers for user
void printSeatinformation (int A, int B, int C, int D){ 
	printf("Current seat information:\n");
	printf("        Level A: %d\n",A);
	printf("        Level B: %d\n",B);
	printf("        Level C: %d\n",C);
	printf("        Level D: %d\n\n\n",D); 
	
	}  
    
//Show ticket price for user   
void printTicketPrice (int Aprc, int Bprc, int Cprc, int Dprc){ 

	 printf("Current Price Information :");
	 printf("        Level A: %d\n",Aprc);
	 printf("        Level B: %d\n",Bprc);
	 printf("        Level C: %d\n",Cprc);
	 printf("        Level D: %d\n",Dprc); 
	 
	 
} 
//Update ticket price for user
int updatePrice (int Aprc, int Bprc, int Cprc, int Dprc){ 
      
      int c;
       scanf(" %d",&c); 
       return c;
    }
//Check avaible seat for user request
int  seatControl(int seatInfo, int numberofsold){ 
	int value;
	
	if(seatInfo>0){
		value=1; 
		return value;
	 }
	
	else{
		value=0;
		return value;
	}
	
}  
//Calculate and show user bill   
int CalculateBill(int ticketPrice, int numberofsold){ 
     int bill;
		     bill=ticketPrice*numberofsold;
 			 printf("Your bill is %d\n",bill);
 			 
			return bill;
		}  

//Show bill for user request 
void printCashInfo(int bill){
	printf(" \nYour bill is %d", bill);
} 

// The main action do this function check seat,prints bill
int sell(int ticket, int avaibleSeat,int ticketprice){ 
	 int flag,z;
	 avaibleSeat=avaibleSeat-ticket;
	 
	 if(avaibleSeat>=0){ 
	     z=ticketprice*ticket;
	     printCashInfo(z);
	 	return avaibleSeat;
	 } 
	 
	 else{
	 	printf("SORRY You don't have enought seats .");
	 	return avaibleSeat;
	 }
	 
	 }
	

int main() { 
	int A=40,B=40,C=40,D=40,z,chooice1=2,n,flag=1,Aprc=100,Bprc=80,Cprc=60,Dprc=40,xa,xb,xc,xd,y,numberOfSold,bill=0,bill1=0,l,sumBill=0,v;
	char chooice2,chooice3,chooice4;
	
	// Command of print main function  
	while((z!=5) && ((chooice1==2) || (chooice1==1)) && (flag==1)){
	  z=printMainMenu();
	 
	
	 //Check Seat 
	 if(z==1){ 
	 	xa=A;
	 	xb=B;
	 	xc=C;
	 	xd=D;
	 	printf("Plese choose which line you will buy a ticket?\n ");
	 	 scanf(" %c",&chooice3); 
	 	 
		  while((chooice3!='A') && (chooice3!='B') && (chooice3!='C') && (chooice3!='D')) {
	 	printf("Plese choose which line you will buy a ticket?\n");
          scanf(" %c",&chooice3);
	      } 
	 	 
	 	if(chooice3=='A'){ 
	 		z=seatControl(xa,y); 
	 		
			 if(z==1){
	 		printf("1(You have empty seats in A)\n");
	 		 printf(" A has got %d empty seats\n",A);
		      } 
	 	     
	 	     else{
			printf("0(it's already finished in A)\n");
		     }
		} 
		
		else if(chooice3=='B'){
			 z=seatControl(xb,y); 
			
			 if(z==1){
	 		printf("1(You have empty seats in B)\n");
	 		printf("B has got %d empty seats\n",B);
		      } 
		     
			  else{
			printf("0(it's already finished in B)\n");
		     }
		} 
		
		else if(chooice3=='C'){
			 z=seatControl(xc,y); 
			 
			  if(z==1){
	 		printf("1(You have empty seats in C)\n");
	 		printf(" C has got %d empty seats\n",C);
		      } 
		     
			  else{
			printf("0(it's already finished in C)\n");
		     } 
		}
		
		else if(chooice3=='D'){
			 z=seatControl(xd,y); 
			 
			  if(z==1){
	 		printf("1(You have empty seats in D)\n");
	 		printf(" D has got %d empty seats",D);
		      } 
		     
			  else{
			printf("0(it's already finished in D)\n");
		     } 
		}
		
	 	
	}  
	 
	 //The part of update ticket price of this software
	 
	   else if(z==2){ 
	    printf("Current Price Information\n :");
	  printf("        Level A: %d\n",Aprc);
	  printf("        Level B: %d\n",Bprc);
	  printf("        Level C: %d\n",Cprc);
	  printf("        Level D: %d\n",Dprc); 
	 
	  printf("Select Level to update:");
       scanf(" %c" ,&chooice4);
	
	  while((chooice4!='A') && (chooice4!='B') && (chooice4!='C') && (chooice4!='D')) {
	  	printf("Select Level to update:");
           scanf(" %c",&chooice4);
	  } 
	  
	  if(chooice4=='A'){
	  	printf("Please Enter NeW A price:");
	  	z=updatePrice(Aprc,Bprc,Cprc,Dprc); 
	  	Aprc=z;
	  	printf("Level A ticket price is updated to %d\n ",z);
	  	
	  } 
	  
	  else if(chooice4=='B'){ 
	     printf("Please Enter NeW B price:");
	  	z=updatePrice(Aprc,Bprc,Cprc,Dprc); 
	  	Bprc=z;
	  	printf("Level B ticket price is updated to %d\n ",z);
	  
	  
	  } 
	  
	  else if(chooice4=='C'){
	  	printf("Please Enter NeW C price:");
	  	z=updatePrice(Aprc,Bprc,Cprc,Dprc); 
	  	Cprc=z;
	  	printf("Level C ticket price is updated to %d\n ",z);
	  	
	  } 
	  
	  else{ 
	      printf("Please Enter NeW D price:");
	  	z=updatePrice(Aprc,Bprc,Cprc,Dprc); 
	  	Dprc=z;
	  	printf("Level D ticket price is updated to %d\n ",z);
	   } 
	  
	  printf("Current Price Information\n :");
	  printf("        Level A: %d\n",Aprc);
	  printf("        Level B: %d\n",Bprc);
	  printf("        Level C: %d\n",Cprc);
	  printf("        Level D: %d\n",Dprc); 
    	}
	  
	 // The part of selling ticket part of this program 
	   else if(z==3){ 
	   printSeatinformation(A,B,C,D);
	   printTicketPrice(Aprc,Bprc,Cprc,Dprc);
	   
	   printf("Select a level:");
	     scanf(" %c" ,&chooice2);
	 
	 while((chooice2!='A') && (chooice2!='B') && (chooice2!='C') && (chooice2!='D')){
		 		printf("Select a level:");
	     scanf(" %c" ,&chooice2); 
	     } 
		 
	 printf("Enter number of tickets for Level %c seat\n : ", chooice2);
   	 scanf("%d" ,&numberOfSold);
   	     
		
   	        
	   switch(chooice2){ 
	     
 		case 'A':
 		if(A>=0){
 			 l=sell(numberOfSold,A,Aprc);
			  if(l>=0){ 
			  bill1=Aprc*numberOfSold;
			  v=l;
			  sumBill=bill1+sumBill;
 			  A=v;
 		     } 
 			 
 			 } 
 			break;
 	     
		 case 'B': 
 	     if(B>=0){
 	     	 l=sell(numberOfSold,B,Bprc);
 	     	 if(l>=0){
 	     	     v=l;
		         bill1=Bprc*numberOfSold;
		         sumBill=bill1+sumBill;
		         B=v;
		     } 
		     
		    }
 			break; 
 		 
		case 'C':
 		 if(C>=0){
 		 	 l=sell(numberOfSold,C,Cprc);
 		 	 if(l>=0){
 		 	     v=l; 
		        bill1=Cprc*numberOfSold;
		         sumBill=bill1+sumBill;
		         C=v;
		     } 
		     
		     
		    
 			}
 			break;
 		 
		 case 'D':	
 		 if(D>=0){
 		 	 l=sell(numberOfSold,D,Dprc);
 		 	 if(l>=0){
 		 	 	 v=l;
			    bill1=Dprc*numberOfSold;
			     sumBill=bill1+sumBill; 
			 	 D=v;
		     } 
			
		    }
 			break;
 		  	
 		  	
 		} 
 	
		 printf("\n**************************************\n");
		 printf("Current Seat Information :\n");
		 printf("         Level A: %d\n", A);
		 printf("         Level B: %d\n", B);
		 printf("         Level C: %d\n", C);
		 printf("         Level D: %d\n", D);
		 printf("**************************************\n");
	    } 
	    //Show user's bill
	   else if(z==4){ 
	   		printf("Current cash information : ");
	   		 printCashInfo(sumBill);
	     } 
	    
	    
	    if(z!=5){
		
	    printf("\n---------------\n");
         printf("OPERATIONS :\n");      
         printf("---------------\n");
		 printf("1.Continue to sell a ticket\n");
		 printf("2.Return to main menu\n"); 
		 printf("Select your operation :");
		  scanf(" %d" ,&chooice1); 
		  
		  if(chooice1==1){ 
	     printSeatinformation(A,B,C,D);
	     printTicketPrice(Aprc,Bprc,Cprc,Dprc); 
	      printf("Select a level:");
	     scanf(" %c" ,&chooice2);
	 
	 while((chooice2!='A') && (chooice2!='B') && (chooice2!='C') && (chooice2!='D')){
		 		printf("Select a level:");
	     scanf(" %c",&chooice2); 
	     } 
		 
	 printf("Enter number of tickets for Level %c seat : ", chooice2);
   	 scanf(" %d",&numberOfSold);

   	    		 
	  switch(chooice2){
 		
 		case 'A':
 		if(A>=0){
 			 l=sell(numberOfSold,A,Aprc);
			 if(l>=0){
			      v=l; 
			      bill1=Aprc*numberOfSold;
 			      sumBill=bill1+sumBill;
 			       A=v;
 		    } 
 		    
 			 } 
 			break;
 	     
		 case 'B': 
 	     if(B>=0){
		     l=sell(numberOfSold,B,Bprc);
		     if(l>=0){
		          v=l; 
		         bill1=Bprc*numberOfSold;
		         sumBill=bill1+sumBill;
		          B=v;
		    }
		     
 			 }
 			break; 
 		 
		case 'C':
 		 if(C>=0){
		     l=sell(numberOfSold,C,Cprc);
		     if(l>=0){
		     	v=l; 
		         bill1=Cprc*numberOfSold;
		          sumBill=bill1+sumBill;
		         C=v;
		    }
 			}
 			break;
 		 
		 case 'D':	
 		 if(D>=0){ 
 		      l=sell(numberOfSold,D,Dprc); 
 		      if(l>=0){
 		      	v=l; 
		         bill1=Dprc*numberOfSold;
		         sumBill=bill1+sumBill; 
		         D=v;
		     }
		     }
 			break; 
 			
 		} 
	     
	     } 
	     }
	      if(z==5){
	      	flag=0;
		  }
     
	 }
	 //End of software
     if(z==5){
    	printf("Current cash information : %d",sumBill);
    	printf("\nBye!");
	}
	return 0;
}
