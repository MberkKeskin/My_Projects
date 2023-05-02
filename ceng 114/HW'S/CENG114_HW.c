#include <stdio.h>
#include <stdlib.h>

void PrintMainMenu(){ 
	printf("----------------\n");
	printf("OPERATIONS:\n");
	printf("----------------\n\n");
	
	printf("1. Stock Info\n");
	printf("2. Update Stocks\n");
	printf("3. Update Prices\n");
	printf("4. Sell\n");
	printf("5. Current cash info\n");
	printf("6. Quit\n\n\n");	
}

void PrintStockInformation(int *RTNumber,int *WTNumber,int *PTNumber,int *YTNumber,int *BTNumber){
	printf("----------------\n");
	printf(" 1)Red Tulip Number is: %d\n", *RTNumber);
	printf(" 2)Pink Tulip Number is: %d\n", *PTNumber);
	printf(" 3)WhiteTulip Number is: %d\n", *WTNumber);
	printf(" 4)Yellow Tulip Number is: %d\n", *YTNumber);
	printf(" 5)Black Tulip Number is: %d\n", *BTNumber);
	printf("----------------\n");
}

void  ProductPrice(int *RTprice,int *WTprice,int *PTprice,int *YTprice,int *BTprice){
	printf("----------------\n");
	printf("1.Red Tulip Price is:%d \n", *RTprice);
	printf("2.Pink Tulip Price is:%d \n", *PTprice);
	printf("3.White Tulip Price is:%d \n", *WTprice);
	printf("4.Yellow Tulip Price is:%d \n", *YTprice);
	printf("5.Black Tulip Price is:%d \n", *BTprice);
	printf("----------------\n");
}

void PrintProduct(int *RTprice,int *WTprice,int *PTprice,int *YTprice,int *BTprice,int *RTnumber,int *WTnumber,int *PTnumber,int *YTnumber,int *BTnumber){
	printf("----------------\n");
	printf("1)Red Tulip price and stock is:%d TL- %d \n", *RTprice, *RTnumber);
	printf("2)Pink Tulip price and stock  is:%d TL- %d \n", *PTprice, *PTnumber);
	printf("3)White Tulip price and stock is:%d TL- %d \n", *WTprice, *WTnumber);
	printf("4)Yellow Tulip price and stock is:%d TL- %d \n", *YTprice, *YTnumber);
	printf("5)Black Tulip price and stock  is:%d TL- %d \n", *BTprice, *BTnumber);
	printf("----------------\n");
}

void PrintCashInfo(int bill){
	printf("Current cash information is %d \n",bill);
}

int stockControl(int *RTnumber,int *WTnumber,int *PTnumber,int *YTnumber,int *BTnumber,int *numberOfSold,int flag){
	int rednumber,whitenumber,pinknumber,yellownumber,blacknumber,sold;
	
	if(flag==1){
		
		 rednumber=*RTnumber;
		
	
		 sold=*numberOfSold;
		 rednumber=rednumber-sold;
		 if(rednumber>=0){ 
		 *RTnumber=rednumber; 
		 }
		
		if(rednumber>=0){
				return 1;
		}
		else{
			return 0;
		}
	} 
	
	else if(flag==2){
		
	
		 pinknumber=*PTnumber; 
	 	 sold=*numberOfSold;
	 	 pinknumber=pinknumber-sold;
	 	 if(pinknumber>=0){
		 *PTnumber=pinknumber; 
		  }
		
		
		if(pinknumber>=0){
			return 1;
		} 
		
		else{
			return 0;
		}
	}
	
	else if(flag==3){
		
		 whitenumber=*WTnumber; 
		 sold=*numberOfSold;
	     whitenumber=whitenumber-sold;
	     if(whitenumber>=0){
	     *WTnumber=whitenumber;
		 }
		
		if(whitenumber>=0){
			return 1;
		} 
		
		else{
			return 0;
		}
	}
	
	else if(flag==4){
	
		 yellownumber=*YTnumber; 
		 
		 
		 sold=*numberOfSold;
	  	 yellownumber=yellownumber-sold;
	  	 if(yellownumber>=0){
		 *YTnumber=yellownumber;
		 }
		
		
		if(yellownumber>=0){
			return 1;
		} 
		
		else{
			return 0;
		}
	}
	
	else if(flag==5){
	
		 blacknumber=*BTnumber; 
		 sold=*numberOfSold;
		 blacknumber=blacknumber-sold;
		 if(blacknumber>=0){
		 *BTnumber=blacknumber; 
		 }
		
		if(blacknumber>=0){
			return 1;
		} 
		
		else{
			return 0;
		}
	}
	
}

void UpdatePrice(int *RTprice,int *WTprice,int *PTprice,int *YTprice,int *BTprice){
	int ProductNumber,ProductNewPrice;
	
	printf("Select a product:");
	scanf("%d",&ProductNumber);
	
	if(ProductNumber==1){
		printf("Enter new 'Red Tulip' price:");
		scanf("%d",&ProductNewPrice);
		*RTprice=ProductNewPrice;
	}
	
	else if(ProductNumber==2){
		printf("Enter new 'Pink Tulip' price:");
		scanf("%d",&ProductNewPrice);
		*PTprice=ProductNewPrice;
    } 
    
    else if(ProductNumber==3){
		printf("Enter new 'White Tulip' price:");
		scanf("%d",&ProductNewPrice);
		*WTprice=ProductNewPrice;
    } 
    
    else if(ProductNumber==4){
		printf("Enter new 'Yellow Tulip' price:");
		scanf("%d",&ProductNewPrice);
		*YTprice=ProductNewPrice;
    } 
    
    else if(ProductNumber==5){
		printf("Enter new 'Black Tulip' price:");
		scanf("%d",&ProductNewPrice);
		*BTprice=ProductNewPrice;
    } 
	
}

void UpdateStocks(int *RTNumber,int *WTNumber,int *PTNumber ,int *YTNumber,int *BTNumber){
	int NewTulipNumber,ProductNumber,temp;
	
	printf("Select Product:");
	scanf("%d",&ProductNumber);
	
	if(ProductNumber==1){
		printf("Enter new 'Red Tulip' number:");
		scanf("%d",&NewTulipNumber);
		temp=*RTNumber;
		temp=temp+NewTulipNumber;
		*RTNumber=temp;
		
	}
	
	else if(ProductNumber==2){
		printf("Enter new 'Pink Tulip' number:");
		scanf("%d",&NewTulipNumber);
		temp=*PTNumber;
		temp=temp+NewTulipNumber;
		*PTNumber=temp;
    } 
    
    else if(ProductNumber==3){
		printf("Enter new 'White Tulip' number:");
		scanf("%d",&NewTulipNumber);
		temp=*WTNumber;
		temp=temp+NewTulipNumber;
		*WTNumber=temp;
    } 
    
    else if(ProductNumber==4){
		printf("Enter new 'Yellow Tulip' number:");
		scanf("%d",&NewTulipNumber);
		temp=*YTNumber;
		temp=temp+NewTulipNumber;
		*YTNumber=temp;
    } 
    
    else if(ProductNumber==5){
		printf("Enter new 'Black Tulip' number:");
		scanf("%d",&NewTulipNumber);
		temp=*BTNumber;
		temp=temp+NewTulipNumber;
		*BTNumber=temp;
    } 
    
    
}

void sell(int *RTprice,int *WTprice,int *PTprice,int *YTprice,int *BTprice,int *RTnumber,int *WTnumber,int *PTnumber,int *YTnumber,int *BTnumber,int *TulipNumber,int *flag){
	int productNumber,NumberofSold,value;
	
	printf("----------------\n");
	printf("Select product:");
	scanf("%d",&productNumber);
	
	if(productNumber==1){
		printf("Please select number of 'Red tulip':");
		scanf("%d",&NumberofSold);
		*TulipNumber=NumberofSold;
		*flag=1;
		printf("----------------\n");
	} 
	
	else if(productNumber==2){
		printf("Please select number of 'Pink tulip':");
		scanf("%d",&NumberofSold);
		*TulipNumber=NumberofSold;
		*flag=2;
		printf("----------------\n");
	}
	
	else if(productNumber==3){
		printf("Please select number of 'White tulip':");
		scanf("%d",&NumberofSold);
		*TulipNumber=NumberofSold;
		*flag=3;
		printf("----------------\n");
	}
	
	else if(productNumber==4){
		printf("Please select number of 'Yellow tulip':");
		scanf("%d",&NumberofSold);
		*TulipNumber=NumberofSold;
		*flag=4;
		printf("----------------\n");
	}
	
	else if(productNumber==5){
		printf("Please select number of 'Black tulip':");
		scanf("%d",&NumberofSold);
		*TulipNumber=NumberofSold;
		*flag=5;
		printf("----------------\n");
	} 
	

}

void addMoney(int total){
	printf("Add %d Tl to cash register\n",total);
}

int CalculateBill(int *RTprice,int *WTprice,int *PTprice,int *YTprice,int *BTprice,int soldNumber,int flag){
	int bill;
	
	if(flag==1){
		bill=(soldNumber) * (*RTprice);
		return bill;
	} 
	
	else if(flag==2){
		bill=(soldNumber) * (*PTprice);
		return bill;
	}
	
	else if(flag==3){
		bill=(soldNumber) * (*WTprice);
		return bill;
		
	} 
	
	else if(flag==4){
		bill=(soldNumber) * (*YTprice);
		return bill;
		
	} 
	
	else if(flag==5){
		bill=(soldNumber) * (*BTprice);
		return bill;
		
	}	
	
}

int main() {
	
	int chooiceForMenu,chooiceForMenu1=0,RTNumber=0,WTnumber=0,PTnumber=0,YTnumber=0,BTnumber=0,RTPrice=15,WTPrice=17,PTPrice=16,YTPrice=18,BTPrice=30,TotalCash=0,Bill=0,NumberofSold=0,flag=0,value;
	//chooiceForMenu1 variable is same purpose as chooiceForMenu variable but it responsible about Sell function 
	//(The first letter of turnip color) number/price 
	
	
	PrintMainMenu();
	//First operation of user chooice for 'what is user want?'
	printf("Select Your operation:");
	scanf("%d",&chooiceForMenu);
	
	while(chooiceForMenu!=6){
		
		if(chooiceForMenu==1){
			PrintStockInformation(&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber);
		}
		
		else if(chooiceForMenu==2){
			PrintStockInformation(&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber);
			UpdateStocks(&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber);
			PrintStockInformation(&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber);
			
			
		}
		
		else if(chooiceForMenu==3){
			ProductPrice(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice);
			UpdatePrice(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice);
			ProductPrice(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice);
		}
		
		else if((chooiceForMenu==4)){
			PrintProduct(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice,&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber);
			sell(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice,&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber,&NumberofSold,&flag);
			// I add flag here because which turnip is user buy.
			value=stockControl(&RTNumber,&WTnumber,&PTnumber,&YTnumber,&BTnumber,&NumberofSold,flag);
			
			if(value==1){
				Bill=CalculateBill(&RTPrice,&WTPrice,&PTPrice,&YTPrice,&BTPrice,NumberofSold,flag);
				TotalCash=TotalCash+Bill;
				addMoney(TotalCash);
			}
			
			else if(value==0){
				if(flag==1){
				 	printf("sorry out of Red tulips\n");
				}
				
				else if(flag==2){
					printf("sorry out of Pink tulips\n");
				}
				
				else if(flag==3){
					printf("sorry out of White tulips\n");
				}
				
				else if(flag==4){
					printf("sorry out of Yellow tulips\n");
				}
				
				else if(flag==5){
					printf("sorry out of Blacxk tulips\n");
				}
			
			}
			
		}
		
		else if(chooiceForMenu==5){
			PrintCashInfo(TotalCash);
			
		} 
		
		//This is why ý use chooiceForMenu1 																				
		printf("----------------\n");
		printf("1)Continue selling\n");
		printf("2)Return to main menu\n");
		printf("Select Your operation:");
	      scanf("%d",&chooiceForMenu1); 
	     printf("----------------\n");
	    if(chooiceForMenu1==1){ 
	    	chooiceForMenu=4;
	    	
		} 
		
		else{
			PrintMainMenu();
			printf("Select Your operation:");
	         scanf("%d",&chooiceForMenu); 
			
		}
	} 
	//This program ends when the user press 6 
	if(chooiceForMenu==6){
		printf("GOODBYE");
	}
	

	return 0;
}
