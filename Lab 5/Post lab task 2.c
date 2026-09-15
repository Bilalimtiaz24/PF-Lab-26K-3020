#include <stdio.h>

int main() {
    float cgpa, income;

    printf("Enter student's CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter monthly family income: ");
    scanf("%f", &income);


    if (cgpa >= 3.0) {
        if (cgpa >= 3.8 && income < 50000) {
            printf("Scholarship Status: Full Scholarship\n");
        } 
        else if (cgpa >= 3.0 && income < 100000) {
            printf("Scholarship Status: Partial Scholarship\n");
        } 
        else {
            printf("Scholarship Status: No Scholarship\n");
        }
    } 
    else {
        printf("Scholarship Status: No Scholarship\n");
    }

    return 0;
}

