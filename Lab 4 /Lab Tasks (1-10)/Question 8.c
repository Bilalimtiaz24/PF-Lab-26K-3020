#include <stdio.h>

int main() {
	int zone;
	float speed,speedlimit,fine;
	
	printf("Enter zone type (1= School Zone, 2= Highway, 3= Residential Area):");
	scanf("%d",&zone);
	printf("Enter driver's speed (in km/h): ");
	scanf("%f", &speed);
	
	switch (zone) {
		case 1:
			speedlimit = 30;
			break;
		case 2:
			speedlimit = 100;
			break;
		case 3:
			speedlimit= 50;
			break;
		default:
			printf("Invalid zone type!\n");
			return 1;
	}
	
	if (speed > speedlimit) {
		fine = 1000;
		if ((speed - speedlimit)>20){
			fine *= 2;
		}
		printf("Fine Amount: Rs. %.2f\n", fine);
	} else{
		printf("No violation! No fine.\n");
	}
	
	return 0;
}

