#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double n1, n2, result;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Square Root\n8.Power\n9.Absolute Value\n10.Modulus\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 8 || choice == 10) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &n1, &n2);
    } else if (choice >= 5 && choice <= 9) {
        printf("Enter one number: ");
        scanf("%lf", &n1);
    }

    switch (choice) {
        case 1: printf("Result: %.2f\n", n1 + n2); break;
        case 2: printf("Result: %.2f\n", n1 - n2); break;
        case 3: printf("Result: %.2f\n", n1 * n2); break;
        case 4: 
            if (n2 != 0) printf("Result: %.2f\n", n1 / n2);
            else printf("Error: Division by zero\n");
            break;
        case 5: printf("Result: %.2f\n", n1 * n1); break;
        case 6: printf("Result: %.2f\n", n1 * n1 * n1); break;
        case 7:
            if (n1 >= 0) printf("Result: %.2f\n", sqrt(n1));
            else printf("Error: Negative square root\n");
            break;
        case 8: printf("Result: %.2f\n", pow(n1, n2)); break;
        case 9: printf("Result: %.2f\n", fabs(n1)); break;
        case 10:
            if ((int)n2 != 0) printf("Result: %d\n", (int)n1 % (int)n2);
            else printf("Error: Modulus by zero\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
