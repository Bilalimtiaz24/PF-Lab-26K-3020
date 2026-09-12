# include <stdio.h>
int main()
{
	int visithour,membershipstatus;
	float billamount,discount=0,finalbill;
	
	printf("Enter bill amount:  ");
	scanf("%f",&billamount);
	printf("Enter hour of visit (In 24 hour format): ");
	scanf("%f",&visithour);
	printf("Is customer a member? (1 = Yes, 2= No): ");
	scanf("%d",&membershipstatus);
	
	if (visithour >=15 && visithour <=17) {
		discount += 20;
	}
	
	if(membershipstatus == 1){
		discount += 10;
	}
	
	if(discount >25) {
		discount = 25;
	}
	
	finalbill = billamount - (billamount * discount / 100);
	
	printf("Total Discount Applied: %.2f%%\n",discount);
	printf("Final Payable Bill: Rs. %.2f\n", finalbill);
	
	return 0; 
	
}
