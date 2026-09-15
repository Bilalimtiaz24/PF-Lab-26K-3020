#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter two numbers:\n");
    scanf("%f%f", &num1, &num2);

    printf("\nSelect an operation:\n");
    printf("1. Power (num1 ^ num2)\n");
    printf("2. Square Root (of num1)\n");
    printf("3. Absolute Value (of num1)\n");
    printf("4. Round (of num1)\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            result = pow(num1,num2);
            printf("Result: %f^%f = %f\n", num1, num2, result);
            break;
        case 2:
        	if (num1 >= 0) {
                result = sqrt(num1);
                printf("Result: Square root of %f = %f\n", num1, result);
            } else {
                printf("Error: Cannot calculate square root of a negative number.\n");
            }
            break;
        case 3:
        	result = abs(num1); // fabs is used for floating-point absolute value
            printf("Result: Absolute value of %f = %f\n", num1, result);
            break;
        
        case 4:
        	result = round(num1);
        	printf("Result: Rounded value of %f = %f\n",num1 , result);
        	break;
        default:
        	printf("Invalid operation choice");
    }
    return 0;
}
   
