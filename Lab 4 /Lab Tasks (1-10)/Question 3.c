#include<stdio.h>

int main()
{
	int accounttype;
	float balance,interest,rate;
	
	printf("Enter Account type (1 = Savings, 2 = Current, 3 = Fixed Deposit): ");
	scanf("%d",&accounttype);
	
	printf("Enter account balance: ");
	scanf("%f",&balance);
	
	switch(accounttype) {
		case 1:  //savings account type
		   if (balance > 100000){
		   	rate = 0.04;
		   }else {
		   	 rate = 0.02;
		   }
		   break;
		case 2:  //Current account type
			rate = 0.0;
			break;
		case 3:  //Fixed Deposit account type
			rate = 0.08;
			break;
		default:
			printf("Invalid account type!\n");
	}
	interest = balance * rate;
	printf("Annual Interest Earned: Rs. %2f\n",interest);
	
	return 0;
}

