#include <stdio.h>

int main()
{
	int plan;
	float minutesused=0, bill=0, extraminutes;
	
	printf("Enter plan choice(1 = Rs. 500 for 1000 minutes, 2 = Rs.800 for 2000 minutes, 3 = Rs.1200 for unlimited minutes, 4 = Custom plan billed at Rs.1/minute): ");
	scanf("%d",&plan);
	
	if(plan == 1 || plan ==2 || plan ==4) {
		printf("Enter minutes used: ");
		scanf("%f",&minutesused);
	}
	switch(plan) {
		case 1: // (Rs.500 for 1000 minutes)
			bill = 500;
			if(minutesused > 1000) {
				extraminutes = minutesused-1000;
				bill += extraminutes * 2;
			}
			break;
		
		case 2:
			bill = 800;
			if(minutesused > 2000) {
				extraminutes = minutesused-2000;
				bill += extraminutes * 2;
			}
			break;
		
		case 3:
			bill = 1200;
			break;
			
		case 4:
			bill = minutesused * 1;
			break;
			
		default:
			printf("Invalid plan choice! Please select again...\n");
			return 1;
			
	}
	
	printf("Total Bill: Rs. %.2f\n", bill);
	
	return 0;
}

