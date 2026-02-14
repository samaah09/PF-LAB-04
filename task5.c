#include <stdio.h>
int main() {
    float balance = 1000.0; 
    float amount;
    int choice;

    printf("\n--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            printf("Current Balance: $%.2f\n", balance);
            break;

        case 2: 
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Error: Amount must be positive.\n");
            } else if (amount > balance) {
                printf("Error: Insufficient funds.\n");
            } else {
                balance = balance - amount; 
                printf("Success! New Balance: $%.2f\n", balance);
            }
            break;

        case 3: 
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Error: Amount must be positive.\n");
            } else {
                balance = balance + amount; 
                printf("Success! New Balance: $%.2f\n", balance);
            }
            break;

        case 4: 
            printf("Thank you. Goodbye!\n");
            break;

        default: 
            printf("Invalid choice! Please try again.\n");
    }

    return 0;
