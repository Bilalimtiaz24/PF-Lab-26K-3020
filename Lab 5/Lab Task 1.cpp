# include <stdio.h>

int main(){
	int x, y, z;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	printf("Enter the value of z: ");
	scanf("%d",&z);
	if (x>y){
		if(x>z){
			printf("The largest value is of x = %d",x);
		}else{
			printf("The largest value of z =%d",z);
		}
	}
	else{
		if(y>z){
			printf("The largest value of y = %d",y);
		}
		else{
			printf("The largest value of z =%d",z);
		}
	}
	return 0;
}