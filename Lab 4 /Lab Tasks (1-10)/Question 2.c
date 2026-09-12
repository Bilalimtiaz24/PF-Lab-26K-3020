#include<stdio.h>

int main()
{
	float entrytestscore,fscpercentage,combinedscore;
	
	printf("Enter your Entry test score(out of 100): ");
	scanf("%f",&entrytestscore);
	
	printf("Enter your Fsc Percentage: ");
	scanf("%f",&fscpercentage);
	
	combinedscore = 0.50 * entrytestscore + 0.50 * fscpercentage;
	printf("combined marks = %.2f\n",combinedscore);
	
	if(combinedscore >= 80 && combinedscore <= 100 ){ 
		printf("Congratulations! You got admission in Computer Science");
	}else if(combinedscore >= 65 && combinedscore <= 79){
		printf("Congratulations! You got admission in Software Engineering");
	}else if(combinedscore >= 50 && combinedscore <= 64){
		printf("Congratulations! You got admission in Information Technology");
	}else if(combinedscore < 50){
		printf("Sorry! You got rejected");
	}
	else{
		printf("Invalid score! Please enter the credidentials again");
		return 1;
	}
	
	
	return 0;
}

