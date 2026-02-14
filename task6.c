#include <stdio.h>
int main() {
    float s1, s2, s3, s4, s5, percentage;

    printf("Enter marks for 5 subjects (0-100): ");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    percentage = ((s1 + s2 + s3 + s4 + s5) / 500) * 100;

    if (percentage >= 85) {
        printf("Full Scholarship\n");
    } else if (percentage >= 70) {
        printf("Partial Scholarship\n");
    } else if (percentage >= 50) {
        printf("Eligible for Consideration\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
