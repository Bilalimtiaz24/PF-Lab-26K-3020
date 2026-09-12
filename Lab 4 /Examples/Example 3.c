//Example 3
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter two integers:\n");
	scanf("%d%d",&num1,&num2);
	if(num2>0){
		printf("num2=%d is greater\n",num2);
	}else{
		printf("num1=%d is greater",num1);
	}
	return 0;
}
