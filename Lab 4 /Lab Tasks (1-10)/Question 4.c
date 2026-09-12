#include<stdio.h>

int main()
{
	int membershiptype,timeslot;
	float basicrate,finalrate;
	
	printf("Enter membership type (1 = Student, 2 = Regular, 3 = Senior Citizen): ");
	scanf("%d",&membershiptype);
	printf("Enter time slot (1 = Morning, 2 = Evening): ");
	scanf("%d",&timeslot);
	
	switch(membershiptype){
		case 1:
			basicrate = 2000;
			break;
		case 2:
			basicrate = 3500;
			break;
		case 3:
			basicrate = 2500;
			break;
		default:
			printf("Invalid membership type!\n");
			return 1;
	}
	switch(timeslot){
		case 1:
			finalrate = basicrate - (basicrate * 0.15);
			break;
		case 2:
			finalrate = basicrate;
			break;
		default:
			printf("Invalid timeslot!\n");
			return 1;
	}
	printf("Monthly final Fee: Rs. %2f\n", finalrate);
	return 0;
}
