#include <stdio.h>

int main() {
	int policystatus,vehicleage;
	float claimamount, approvedclaimamount;
	
	printf("Enter Policy status ( 1= Active, 0= Inactive): ");
	scanf("%d",&policystatus);
	printf("Enter vehicle age (in years): ");
	scanf("%d", &vehicleage);
	printf("Enter claim amount: ");
	scanf("%f", &claimamount);
	
	if(!policystatus) {
		printf("Claim Rejected: Policy is not active\n");
	} else if (vehicleage > 15) {
		printf("Claim Rejected: Vehicle exceeds maximum insurable age\n");
	}else if (vehicleage < 10) {
		if (claimamount <= 500000) {
			printf("Claim Approved: Rs. %.2f\n",claimamount);
		}else {
			printf("Claim Rejected: Amount exceeds Rs. 500,000\n");
		}
	}else {
		approvedclaimamount = claimamount * 0.5;
		printf("Claim Partially Approved (only 50%): Rs. %.2f\n",approvedclaimamount); 
	}
	return 0;
}
