#include <stdio.h>

int main()
{
	int numofpeople;
	float combinedweight;
	
	printf("Enter the number of people: ");
	scanf("%d",&numofpeople);
	printf("Enter total combined weight (in kg): ");
	scanf("%f",&combinedweight);
	
	if (numofpeople > 10 && combinedweight > 1000) {
		printf("Denied! Exceeds both people limit and weight capacity\n");
	}else if(combinedweight > 1000){
		printf("Denied! Overweight\n");
	}else if(numofpeople > 10){
		printf("Denied! People limit exceeds\n");
	}else{
		printf("Elevator can be used normally.Thanks for your cooperation!\n");
	}
	
	return 0;
}

