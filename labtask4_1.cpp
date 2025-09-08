#include<stdio.h>
int main(){
	int price;
	printf("Write the total bill of the customer:");
	scanf("%d",&price);
	if (price> 5000){
		float discount;
		printf("Since total bill is more than 5000 you have recieved 10%%  discount\n");
		discount=price*0.9;
		printf("The total bill now is %f", discount);}
	else{
		printf("The total bill is: %d", price);
		
	
	}
	
	
	
	
	
	
	
return 0;}
